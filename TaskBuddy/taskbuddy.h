#ifndef TASKBUDDY_H
#define TASKBUDDY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TaskBuddy; }
QT_END_NAMESPACE

class TaskBuddy : public QMainWindow
{
    Q_OBJECT

public:
    TaskBuddy(QWidget *parent = nullptr);
    ~TaskBuddy();

private:
    Ui::TaskBuddy *ui;
};
#endif // TASKBUDDY_H
