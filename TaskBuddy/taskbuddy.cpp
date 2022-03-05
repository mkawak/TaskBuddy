#include "taskbuddy.h"
#include "ui_taskbuddy.h"

#include <QMessageBox>

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
    bool login = false;
    for(unsigned int i = 0; i < userAccounts.size(); i++){
        if(userAccounts.at(i).getUserName() == userName.toStdString()){
            login = true;
        }
    }

    if(!login){
        QMessageBox::warning(this, "Login", "User Account Not Found");
    }else{
        taskHub = new TaskHub(this);
    }
}
void TaskBuddy::on_CreateAccButton_clicked()
{
    QString userName = ui->UserNameInput->text();
    UserAccount newUser;

    newUser.setUserName(userName.toStdString());

    userAccounts.push_back(newUser);
}

