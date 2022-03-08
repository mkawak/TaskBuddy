#include "taskhub.h"
#include "ui_taskhub.h"

TaskHub::TaskHub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaskHub)
{
    ui->setupUi(this);
    ui->AddTL->hide();
    ui->AddT->hide();
    ui->AddSubTask->hide();
   // ui->AddT->hide();
    //ui->AddSubTask->hide();
    for(unsigned int i = 0; i < currUser.list.size(); i++){
        QString qstr = QString::fromStdString(currUser.list.at(i).getListName());
        ui->TaskLists->addItem(qstr);
    }
}

TaskHub::~TaskHub()
{
    delete ui;
}

void TaskHub::on_pushButton_clicked()
{
    TaskHub::close();
}


void TaskHub::on_addTaskList_clicked()
{
    ui->AddTL->show();
    //TaskList *list = new TaskList();
}


void TaskHub::on_LogOut_clicked()
{
    TaskHub::close();
}


void TaskHub::on_addTLBtn_clicked()
{
    QString name = ui->taskListNameInput->text();
    QString category = ui->taskListCatInput->text();

    newList.setListName(name.toStdString());
    newList.setListCategory(category.toStdString());
    currUser.addTaskList(newList);

    ui->TaskLists->addItem(category + ": " +name);

    ui->AddTL->hide();
}


void TaskHub::on_addTask_clicked()
{
    ui->AddT->show();
}


void TaskHub::on_addTBtn_clicked()
{
    QString taskName = ui->taskNameInput->text();
    QString taskNote = ui->taskNoteInput->text();
    QString taskDate = ui->taskDateInput->text();
    Task newTask;

    newTask.setTaskName(taskName.toStdString());
    newTask.setTaskNote(taskNote.toStdString());
    //newTask.setTaskName(taskName.toStdString());

    newList.addTask(newTask);

    ui->Tasks->addItem(taskDate + " - " + taskName + ": " + taskNote);
    ui->AddT->hide();
}


void TaskHub::on_addSubTask_clicked()
{
    ui->AddSubTask->show();
}


void TaskHub::on_addSubTaskBtn_clicked()
{
    ui->AddSubTask->hide();
}


void TaskHub::on_deleteTaskList_clicked()
{
    QListWidgetItem *it = ui->TaskLists->takeItem(ui->TaskLists->currentRow());
    delete it;
}




void TaskHub::on_deleteTask_clicked()
{
    QListWidgetItem *it = ui->Tasks->takeItem(ui->Tasks->currentRow());
    delete it;
}

