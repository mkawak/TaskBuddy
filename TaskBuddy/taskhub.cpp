#include "taskhub.h"
#include "ui_taskhub.h"

TaskHub::TaskHub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaskHub)
{
    ui->setupUi(this);
}

TaskHub::~TaskHub()
{
    delete ui;
}
