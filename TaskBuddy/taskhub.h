#ifndef TASKHUB_H
#define TASKHUB_H

#include <QMainWindow>

namespace Ui {
class TaskHub;
}

class TaskHub : public QMainWindow
{
    Q_OBJECT

public:
    explicit TaskHub(QWidget *parent = nullptr);
    ~TaskHub();

private:
    Ui::TaskHub *ui;
};

#endif // TASKHUB_H
