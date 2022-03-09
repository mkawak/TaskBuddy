#include "taskbuddy.h"
#include "ui_taskbuddy.h"

#include <QMessageBox>
#include <QDebug>

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
        if(currUser->list.size() >0){
            qDebug() << "List is not empty";
        }

            QString cat;
            QString name;
            for(unsigned int i = 0; i < currUser->list.size(); i++){
                cat = QString::fromStdString(currUser->list.at(i).getListCategory());
                name = QString::fromStdString(currUser->list.at(i).getListName());
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

    if(currUser->list.size() > 0){
        qDebug() << "List is saved";
    }
}

void TaskBuddy::on_deleteTLMenuBtn_clicked()
{
    if(currUser->list.size() == 0){
        QMessageBox::warning(this, "Warning", "UserAccount has no Task Lists");
    }else if(this->ui->TaskListsDisplay->selectedItems().size() == 0){
            QMessageBox::warning(this, "Warning", "Please select a Task List");
    }else{
        int row;

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
        TaskList *tl = &currUser->list.at(row);
        if(tl->tList.size() > 0){
            ui->TasksDisplay->clear();
            for(unsigned int i = 0; i < tl->tList.size(); i++){
                QString nt = QString::fromStdString(tl->tList.at(i).getTaskNote());
                QString nm  = QString::fromStdString(tl->tList.at(i).getTaskName());
                QString dt  = QString::fromStdString(tl->tList.at(i).getTaskDate());
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

    if(currUser->list.size() == 0){
        QMessageBox::warning(this, "Warning", "Please add a Task List");
    }else if(this->ui->TaskListsDisplay->selectedItems().size() == 0){
        QMessageBox::warning(this, "Warning", "Please select a Task List");
    }else{
        int row = -1;
        ui->AddT->show();

        for(QListWidgetItem *item: ui->TaskListsDisplay->selectedItems()){
            row = ui->TaskListsDisplay->row(item);
        }
        TaskList *tl = &currUser->list.at(row);
        if(tl->tList.size() > 0){
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
        TaskList *tl = &currUser->list.at(row);

        newTask.setTaskName(name.toStdString());
        newTask.setTaskNote(note.toStdString());
        newTask.setTaskDate(date.toStdString());

        tl->addTask(newTask);

        if(tl->tList.size() > 0){
            for(unsigned int i = 0; i < tl->tList.size(); i++){
                QString nt = QString::fromStdString(tl->tList.at(i).getTaskNote());
                QString nm  = QString::fromStdString(tl->tList.at(i).getTaskName());
                QString dt  = QString::fromStdString(tl->tList.at(i).getTaskDate());
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

         TaskList *tl = &currUser->list.at(row);



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
        TaskList *tl = &currUser->list.at(row);
        Task *t = &tl->tList.at(row);
        if(t->subTaskList.size() > 0){
            ui->SubTaskDisplay->clear();
            for(unsigned int i = 0; i < tl->tList.size(); i++){
                QString name = QString::fromStdString(t->subTaskList.at(i).getSubTaskName());
                ui->SubTaskDisplay->addItem(name);
            }
            qDebug() << "Task is not empty";
        }else{
            ui->SubTaskDisplay->clear();
            QMessageBox::warning(this, "Warning", "Please add a SubTask");
            qDebug() << "Task is empty";
        }
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
        TaskList *tl = &currUser->list.at(rowTL);
        Task *t = &tl->tList.at(row);
        ui->AddSubTask->show();

        if(t->subTaskList.size() > 0){
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
        TaskList *tl = &currUser->list.at(rowTL);
        Task *t = &tl->tList.at(row);

        newSubTask.setSubTaskName(name.toStdString());

        t->addSubTask(newSubTask);

        if(t->subTaskList.size() > 0){
            for(unsigned int i = 0; i < t->subTaskList.size(); i++){
                QString nm  = QString::fromStdString(t->subTaskList.at(i).getSubTaskName());
                ui->SubTaskDisplay->addItem(nm);
            }
            qDebug() << "Task is not empty";
        }else{
            qDebug() << "Task is empty";
        }
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

        TaskList *tl = &currUser->list.at(row);
        Task *t = &tl->tList.at(rowT);

        t->deleteSubTask(rowST);

        ui->SubTaskDisplay->takeItem(rowST);
    }

}





