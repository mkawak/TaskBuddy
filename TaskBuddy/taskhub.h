#ifndef TASKHUB_H
#define TASKHUB_H

#include <QMainWindow>
#include "UserAccount.hpp"

namespace Ui {
class TaskHub;
}

class TaskHub : public QMainWindow
{
    Q_OBJECT

public:
    explicit TaskHub(QWidget *parent = nullptr);
    ~TaskHub();

private slots:
    void on_pushButton_clicked();

    void on_addTaskList_clicked();

    void on_LogOut_clicked();

    void on_addTLBtn_clicked();

    void on_addTask_clicked();

    void on_addTBtn_clicked();

    void on_addSubTask_clicked();

    void on_addSubTaskBtn_clicked();

    void on_deleteTaskList_clicked();
    void on_deleteTask_clicked();

private:
    Ui::TaskHub *ui;
    UserAccount currUser;
TaskList newList;

};

#endif // TASKHUB_H
