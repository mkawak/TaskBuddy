#ifndef TASKBUDDY_H
#define TASKBUDDY_H

#include <QMainWindow>
#include "UserAccount.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class TaskBuddy; }
QT_END_NAMESPACE

class TaskBuddy : public QMainWindow
{
    Q_OBJECT

public:
    TaskBuddy(QWidget *parent = nullptr);
    ~TaskBuddy();

private slots:
    void on_LoginButton_clicked();

    void on_CreateAccButton_clicked();

    void on_LogOut_clicked();

    void on_addTLMenuBtn_clicked();

    void on_addTLBtn_clicked();

    void on_addTaskMenuBtn_clicked();

    void on_addTBtn_clicked();

    void on_deleteTLMenuBtn_clicked();

    void on_deleteTaskMenuBtn_clicked();


    void on_showSubTasks_clicked();

    void on_addSTMenuBtn_clicked();

    void on_deleteSTMenuBtn_clicked();

    void on_addSubTaskBtn_clicked();

    void on_showTaskMenuBtn_clicked();

private:
    Ui::TaskBuddy *ui;
    vector<UserAccount> userAccounts;
    UserAccount *currUser;

};
#endif // TASKBUDDY_H
