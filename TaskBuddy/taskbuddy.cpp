#include "taskbuddy.h"
#include "ui_taskbuddy.h"

TaskBuddy::TaskBuddy(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TaskBuddy)
{
    ui->setupUi(this);
}

TaskBuddy::~TaskBuddy()
{
    delete ui;
}


void TaskBuddy::on_LoginButton_clicked()
{
    QString userName = ui->UserNameInput->text();
}


void TaskBuddy::on_CreateAccButton_clicked()
{
    QString userName = ui->UserNameInput->text();
    UserAccount newUser;
    newUser.setUserName(userName);
}

