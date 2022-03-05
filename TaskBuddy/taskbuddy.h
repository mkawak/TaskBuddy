#ifndef TASKBUDDY_H
#define TASKBUDDY_H

#include <QMainWindow>
#include "taskhub.h"
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

private:
    Ui::TaskBuddy *ui;
    TaskHub *taskHub;
    vector<UserAccount> userAccounts;
};
#endif // TASKBUDDY_H
