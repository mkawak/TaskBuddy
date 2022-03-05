#include "taskbuddy.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaskBuddy w;
    w.show();
    return a.exec();
}
