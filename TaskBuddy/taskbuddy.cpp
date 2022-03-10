#include "taskbuddy.h"
#include "ui_taskbuddy.h"

#include <QMessageBox>
#include <QDebug>
#include <vector>

TaskBuddy::TaskBuddy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TaskBuddy)
{
    ui->setupUi(this);
    ui->taskHub->hide();
    ui->AddTL->hide();
    ui->AddT->hide();
    ui->AddSubTask->hide();
}

TaskBuddy::~TaskBuddy()
{
    delete ui;
}


void TaskBuddy::on_LoginButton_clicked()
{
    QString userName = ui->UserNameInput->text();
    bool login = false;
    for(unsigned int i = 0; i < userAccounts.size(); i++){
        if(userAccounts.at(i).getUserName() == userName.toStdString()){
            login = true;
            currUser = &userAccounts.at(i);
        }
    }

    if(!login){
        QMessageBox::warning(this, "Login", "User Account was not found.");
    }else{

        ui->taskHub->show();
        if(currUser->getTaskList().size() >0){
            qDebug() << "List is not empty";
        }

            QString cat;
            QString name;
            for(unsigned int i = 0; i < currUser->getTaskList().size(); i++){
                cat = QString::fromStdString(currUser->getTaskList().at(i).getListCategory());
                name = QString::fromStdString(currUser->getTaskList().at(i).getListName());
                ui->TaskListsDisplay->addItem(cat + ": " + name);
            }

    }
}
void TaskBuddy::on_CreateAccButton_clicked()
{
    QString userName = ui->UserNameInput->text();
    UserAccount newUser;

    if(userName.toStdString() == ""){
        QMessageBox::warning(this, "Login", "Please enter valid username.");
    }else{
        newUser.setUserName(userName.toStdString());
        userAccounts.push_back(newUser);
        for(unsigned int i = 0; i < userAccounts.size(); i++){
            if(userAccounts.at(i).getUserName() == userName.toStdString()){
                currUser = &userAccounts.at(i);
            }
        }
        QMessageBox::information(this, "Login", "User Account was created.");
    }

}

void TaskBuddy::on_LogOut_clicked()
{
    ui->taskHub->hide();
    ui->TaskListsDisplay->clear();
    ui->TasksDisplay->clear();
    ui->SubTaskDisplay->clear();
}

void TaskBuddy::on_addTLMenuBtn_clicked()
{
    ui->AddTL->show();
}

void TaskBuddy::on_addTLBtn_clicked()
{
    QString cat = ui->taskListCatInput->text();
    QString name = ui->taskListNameInput->text();
    TaskList newTL;

    ui->AddTL->hide();

    newTL.setListName(name.toStdString());
    newTL.setListCategory(cat.toStdString());

    currUser->addTaskList(newTL);

    ui->TaskListsDisplay->addItem(cat + ": " + name);

    if(currUser->getTaskList().size() > 0){
        qDebug() << "List is saved";
    }
}

void TaskBuddy::on_deleteTLMenuBtn_clicked()
{
    if(currUser->getTaskList().size() == 0){
        QMessageBox::warning(this, "Warning", "UserAccount has no Task Lists");
    }else if(this->ui->TaskListsDisplay->selectedItems().size() == 0){
            QMessageBox::warning(this, "Warning", "Please select a Task List");
    }else{
        int row = -1;

        for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
            row = ui->TaskListsDisplay->row(item);
        }


        currUser->deleteTaskList(row);


        ui->TaskListsDisplay->takeItem(row);
        ui->TasksDisplay->clear();
    }

}


void TaskBuddy::on_showTaskMenuBtn_clicked()
{
    if(this->ui->TaskListsDisplay->selectedItems().size() == 0){
        QMessageBox::warning(this, "Warning", "Please select a Task List");
    }else{
        int row = -1;

        for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
            row = ui->TaskListsDisplay->row(item);
        }

        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        if(tl->getTasks().size() > 0){
            ui->TasksDisplay->clear();
            for(unsigned int i = 0; i < tl->getTasks().size(); i++){
                QString nt = QString::fromStdString(tl->getTasks().at(i).getTaskNote());
                QString nm  = QString::fromStdString(tl->getTasks().at(i).getTaskName());
                QString dt  = QString::fromStdString(tl->getTasks().at(i).getTaskDate());
                ui->TasksDisplay->addItem(dt + ": " + nm + " - " + nt);
            }
            qDebug() << "TaskList is not empty";
        }else{
            ui->TasksDisplay->clear();
            QMessageBox::warning(this, "Warning", "Please add a Task");
            qDebug() << "TaskList is empty";
        }
    }
}

void TaskBuddy::on_addTaskMenuBtn_clicked()
{

    if(currUser->getTaskList().size() == 0){
        QMessageBox::warning(this, "Warning", "Please add a Task List");
    }else if(this->ui->TaskListsDisplay->selectedItems().size() == 0){
        QMessageBox::warning(this, "Warning", "Please select a Task List");
    }else{
        int row = -1;
        ui->AddT->show();

        for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
            row = ui->TaskListsDisplay->row(item);
        }

        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        if(tl->getTasks().size() > 0){
            ui->TasksDisplay->clear();
            qDebug() << "TaskList is not empty";
        }else{
            ui->TasksDisplay->clear();
            qDebug() << "TaskList is empty";
        }
    }
}

void TaskBuddy::on_addTBtn_clicked()
{
    QString note = ui->taskNoteInput->text();
    QString name = ui->taskNameInput->text();
    QString date = ui->taskDateInput->text();
    Task newTask;
    int row = -1;

    ui->AddT->hide();

    for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
        row = ui->TaskListsDisplay->row(item);
    }

    if(row >= 0){
        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        newTask.setTaskName(name.toStdString());
        newTask.setTaskNote(note.toStdString());
        newTask.setTaskDate(date.toStdString());

        tl->addTask(newTask);

        if(tl->getTasks().size() > 0){
            for(unsigned int i = 0; i < tl->getTasks().size(); i++){
                QString nt = QString::fromStdString(tl->getTasks().at(i).getTaskNote());
                QString nm  = QString::fromStdString(tl->getTasks().at(i).getTaskName());
                QString dt  = QString::fromStdString(tl->getTasks().at(i).getTaskDate());
                ui->TasksDisplay->addItem(dt + ": " + nm + " - " + nt);
            }
            qDebug() << "TaskList is not empty";
        }else{
            qDebug() << "TaskList is empty";
        }
    }
}

void TaskBuddy::on_deleteTaskMenuBtn_clicked()
{
    int row = -1;
    int rowTL = -1;

    for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
        row = ui->TaskListsDisplay->row(item);
    }

    for(QListWidgetItem *item: ui->TasksDisplay->selectedItems()){
        rowTL = ui->TasksDisplay->row(item);
    }

    if(this->ui->TasksDisplay->count() == 0){
        QMessageBox::warning(this, "Warning", "Task List has no Tasks");
    }else if(this->ui->TasksDisplay->selectedItems().size() == 0){
            QMessageBox::warning(this, "Warning", "Please select a Task");
    }else{

        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        tl->deleteTask(rowTL);


        ui->TasksDisplay->takeItem(row);
        ui->SubTaskDisplay->clear();
    }

}


void TaskBuddy::on_showSubTasks_clicked()
{
    if(this->ui->TasksDisplay->selectedItems().size() == 0){
        QMessageBox::warning(this, "Warning", "Please select a Task");
    }else{
        int row = -1;

        for(QListWidgetItem *item: ui->TasksDisplay->selectedItems()){
            row = ui->TasksDisplay->row(item);
        }

        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        vector<Task> currTask = tl->getTasks();
        Task *t = &currTask.at(row);

        vector<SubTask> currSubTask = t->getSubTaskList();
        if(currSubTask.size() > 0){
            ui->SubTaskDisplay->clear();
            for(unsigned int i = 0; i < tl->getTasks().size(); i++){
                QString name = QString::fromStdString(currSubTask.at(i).getSubTaskName());
                ui->SubTaskDisplay->addItem(name);
            }
            qDebug() << "Task is not empty";
        }else{
            ui->SubTaskDisplay->clear();
            QMessageBox::warning(this, "Warning", "Please add a SubTask");
            qDebug() << "Task is empty";
        }
        delete[] tl;
        delete[] t;
    }
}

void TaskBuddy::on_addSTMenuBtn_clicked()
{
    int row = -1;
    int rowTL = -1;

    for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
        rowTL = ui->TaskListsDisplay->row(item);
    }
    for(QListWidgetItem *item: ui->TasksDisplay->selectedItems()){
        row = ui->TasksDisplay->row(item);
    }


    if(row < 0){
        QMessageBox::warning(this, "Warning", "Please add a Task");
        qDebug() << "Returned";
        return;
    }else if(this->ui->TasksDisplay->selectedItems().size() == 0){
        QMessageBox::warning(this, "Warning", "Please select a Task");
    }else {
        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(rowTL);

        vector<Task> currTask = tl->getTasks();
        Task *t = &currTask.at(row);
        ui->AddSubTask->show();

        vector<SubTask> currSubTask = t->getSubTaskList();
        if(currSubTask.size() > 0){
            ui->SubTaskDisplay->clear();
            qDebug() << "Task is not empty";
        }else{
            ui->SubTaskDisplay->clear();
            qDebug() << "Task is empty";
        }
    }
}

void TaskBuddy::on_addSubTaskBtn_clicked()
{
    QString name = ui->subTaskNameInput->text();
    SubTask newSubTask;
    int row = -1;
    int rowTL = -1;

    ui->AddSubTask->hide();

    for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
        rowTL = ui->TaskListsDisplay->row(item);
    }

    for(QListWidgetItem *item: ui->TasksDisplay->selectedItems()){
        row = ui->TasksDisplay->row(item);
    }

    if(row >= 0){
        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(rowTL);

        vector<Task> currTask = tl->getTasks();
        Task *t = &currTask.at(row);
        newSubTask.setSubTaskName(name.toStdString());

        t->addSubTask(newSubTask);

        vector<SubTask> currSubTask = t->getSubTaskList();
        if(currSubTask.size() > 0){
            for(unsigned int i = 0; i < currSubTask.size(); i++){
                QString nm  = QString::fromStdString(currSubTask.at(i).getSubTaskName());
                ui->SubTaskDisplay->addItem(nm);
            }
            qDebug() << "Task is not empty";
        }else{
            qDebug() << "Task is empty";
        }
        delete [] t;
    }
}

void TaskBuddy::on_deleteSTMenuBtn_clicked()
{
    int row = -1;
    int rowT = -1;
    int rowST = -1;

    for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
        row = ui->TaskListsDisplay->row(item);
    }

    for(QListWidgetItem *item: ui->TasksDisplay->selectedItems()){
            rowT = ui->TasksDisplay->row(item);
        }

    for(QListWidgetItem *item: ui->SubTaskDisplay->selectedItems()){
            rowST = ui->SubTaskDisplay->row(item);
        }

    if(this->ui->SubTaskDisplay->count() == 0){
        QMessageBox::warning(this, "Warning", "Task has no Sub Tasks");
    }else if(this->ui->SubTaskDisplay->selectedItems().size() == 0){
            QMessageBox::warning(this, "Warning", "Please select a Task");
    }else{

        vector<TaskList> currTaskList = currUser->getTaskList();
        TaskList *tl = &currTaskList.at(row);

        vector<Task> currTask = tl->getTasks();
        Task *t = &currTask.at(rowT);

        t->deleteSubTask(rowST);

        ui->SubTaskDisplay->takeItem(rowST);
    }

}





