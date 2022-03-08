/********************************************************************************
** Form generated from reading UI file 'taskhub.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKHUB_H
#define UI_TASKHUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskHub
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *Menu;
    QGridLayout *gridLayout;
    QPushButton *addTaskList;
    QPushButton *deleteSubTask;
    QPushButton *addSubTask;
    QPushButton *addTask;
    QPushButton *deleteTaskList;
    QPushButton *deleteTask;
    QListWidget *TaskLists;
    QGroupBox *AddTL;
    QVBoxLayout *verticalLayout;
    QLabel *addTaskListTitle;
    QHBoxLayout *addTaskListName;
    QLabel *taskListNameTxt;
    QLineEdit *taskListNameInput;
    QHBoxLayout *addTaskListCat;
    QLabel *catTxt;
    QLineEdit *taskListCatInput;
    QPushButton *addTLBtn;
    QListWidget *Tasks;
    QGroupBox *AddT;
    QVBoxLayout *verticalLayout_2;
    QLabel *addTaskTitle;
    QHBoxLayout *addTaskName;
    QLabel *taskTxt;
    QLineEdit *taskNameInput;
    QHBoxLayout *addTaskNote;
    QLabel *noteTxt;
    QLineEdit *taskNoteInput;
    QHBoxLayout *addTaskDate;
    QLabel *dateTxt;
    QLineEdit *taskDateInput;
    QPushButton *addTBtn;
    QListWidget *TaskDisplay;
    QGroupBox *AddSubTask;
    QVBoxLayout *verticalLayout_3;
    QLabel *addSubTaskTitle;
    QHBoxLayout *addSubTaskName;
    QLabel *subTaskNameTxt;
    QLineEdit *subTaskNameInput;
    QPushButton *addSubTaskBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Title;
    QPushButton *LogOut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TaskHub)
    {
        if (TaskHub->objectName().isEmpty())
            TaskHub->setObjectName(QString::fromUtf8("TaskHub"));
        TaskHub->resize(800, 600);
        centralwidget = new QWidget(TaskHub);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 70, 741, 481));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #d1eaf1;\n"
"	border-radius: 30px;\n"
"}"));
        Menu = new QGroupBox(groupBox);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(28, 350, 681, 111));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addTaskList = new QPushButton(Menu);
        addTaskList->setObjectName(QString::fromUtf8("addTaskList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTaskList->sizePolicy().hasHeightForWidth());
        addTaskList->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(125, 195, 215, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        addTaskList->setPalette(palette);
        QFont font;
        font.setPointSize(18);
        addTaskList->setFont(font);
        addTaskList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(addTaskList, 1, 0, 1, 1);

        deleteSubTask = new QPushButton(Menu);
        deleteSubTask->setObjectName(QString::fromUtf8("deleteSubTask"));
        sizePolicy.setHeightForWidth(deleteSubTask->sizePolicy().hasHeightForWidth());
        deleteSubTask->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        deleteSubTask->setPalette(palette1);
        deleteSubTask->setFont(font);
        deleteSubTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(deleteSubTask, 2, 2, 1, 1);

        addSubTask = new QPushButton(Menu);
        addSubTask->setObjectName(QString::fromUtf8("addSubTask"));
        sizePolicy.setHeightForWidth(addSubTask->sizePolicy().hasHeightForWidth());
        addSubTask->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        addSubTask->setPalette(palette2);
        addSubTask->setFont(font);
        addSubTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(addSubTask, 1, 2, 1, 1);

        addTask = new QPushButton(Menu);
        addTask->setObjectName(QString::fromUtf8("addTask"));
        sizePolicy.setHeightForWidth(addTask->sizePolicy().hasHeightForWidth());
        addTask->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        addTask->setPalette(palette3);
        addTask->setFont(font);
        addTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(addTask, 1, 1, 1, 1);

        deleteTaskList = new QPushButton(Menu);
        deleteTaskList->setObjectName(QString::fromUtf8("deleteTaskList"));
        sizePolicy.setHeightForWidth(deleteTaskList->sizePolicy().hasHeightForWidth());
        deleteTaskList->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        deleteTaskList->setPalette(palette4);
        deleteTaskList->setFont(font);
        deleteTaskList->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(deleteTaskList, 2, 0, 1, 1);

        deleteTask = new QPushButton(Menu);
        deleteTask->setObjectName(QString::fromUtf8("deleteTask"));
        sizePolicy.setHeightForWidth(deleteTask->sizePolicy().hasHeightForWidth());
        deleteTask->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        deleteTask->setPalette(palette5);
        deleteTask->setFont(font);
        deleteTask->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #7dc3d7;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));

        gridLayout->addWidget(deleteTask, 2, 1, 1, 1);

        TaskLists = new QListWidget(groupBox);
        TaskLists->setObjectName(QString::fromUtf8("TaskLists"));
        TaskLists->setGeometry(QRect(37, 50, 217, 281));
        TaskLists->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"}"));
        AddTL = new QGroupBox(groupBox);
        AddTL->setObjectName(QString::fromUtf8("AddTL"));
        AddTL->setGeometry(QRect(37, 50, 217, 281));
        AddTL->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout = new QVBoxLayout(AddTL);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addTaskListTitle = new QLabel(AddTL);
        addTaskListTitle->setObjectName(QString::fromUtf8("addTaskListTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addTaskListTitle->sizePolicy().hasHeightForWidth());
        addTaskListTitle->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        addTaskListTitle->setFont(font1);
        addTaskListTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskListTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(addTaskListTitle);

        addTaskListName = new QHBoxLayout();
        addTaskListName->setObjectName(QString::fromUtf8("addTaskListName"));
        taskListNameTxt = new QLabel(AddTL);
        taskListNameTxt->setObjectName(QString::fromUtf8("taskListNameTxt"));
        taskListNameTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskListName->addWidget(taskListNameTxt);

        taskListNameInput = new QLineEdit(AddTL);
        taskListNameInput->setObjectName(QString::fromUtf8("taskListNameInput"));
        taskListNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskListName->addWidget(taskListNameInput);


        verticalLayout->addLayout(addTaskListName);

        addTaskListCat = new QHBoxLayout();
        addTaskListCat->setObjectName(QString::fromUtf8("addTaskListCat"));
        catTxt = new QLabel(AddTL);
        catTxt->setObjectName(QString::fromUtf8("catTxt"));
        catTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskListCat->addWidget(catTxt);

        taskListCatInput = new QLineEdit(AddTL);
        taskListCatInput->setObjectName(QString::fromUtf8("taskListCatInput"));
        taskListCatInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskListCat->addWidget(taskListCatInput);


        verticalLayout->addLayout(addTaskListCat);

        addTLBtn = new QPushButton(AddTL);
        addTLBtn->setObjectName(QString::fromUtf8("addTLBtn"));
        sizePolicy1.setHeightForWidth(addTLBtn->sizePolicy().hasHeightForWidth());
        addTLBtn->setSizePolicy(sizePolicy1);
        QPalette palette6;
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addTLBtn->setPalette(palette6);
        addTLBtn->setFont(font);
        addTLBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: grey;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: grey;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(addTLBtn);

        Tasks = new QListWidget(groupBox);
        Tasks->setObjectName(QString::fromUtf8("Tasks"));
        Tasks->setGeometry(QRect(260, 50, 217, 281));
        Tasks->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"}"));
        AddT = new QGroupBox(groupBox);
        AddT->setObjectName(QString::fromUtf8("AddT"));
        AddT->setGeometry(QRect(260, 50, 217, 281));
        AddT->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(AddT);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        addTaskTitle = new QLabel(AddT);
        addTaskTitle->setObjectName(QString::fromUtf8("addTaskTitle"));
        sizePolicy1.setHeightForWidth(addTaskTitle->sizePolicy().hasHeightForWidth());
        addTaskTitle->setSizePolicy(sizePolicy1);
        addTaskTitle->setFont(font1);
        addTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(addTaskTitle);

        addTaskName = new QHBoxLayout();
        addTaskName->setObjectName(QString::fromUtf8("addTaskName"));
        taskTxt = new QLabel(AddT);
        taskTxt->setObjectName(QString::fromUtf8("taskTxt"));
        taskTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskName->addWidget(taskTxt);

        taskNameInput = new QLineEdit(AddT);
        taskNameInput->setObjectName(QString::fromUtf8("taskNameInput"));
        taskNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskName->addWidget(taskNameInput);


        verticalLayout_2->addLayout(addTaskName);

        addTaskNote = new QHBoxLayout();
        addTaskNote->setObjectName(QString::fromUtf8("addTaskNote"));
        noteTxt = new QLabel(AddT);
        noteTxt->setObjectName(QString::fromUtf8("noteTxt"));
        noteTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskNote->addWidget(noteTxt);

        taskNoteInput = new QLineEdit(AddT);
        taskNoteInput->setObjectName(QString::fromUtf8("taskNoteInput"));
        taskNoteInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskNote->addWidget(taskNoteInput);


        verticalLayout_2->addLayout(addTaskNote);

        addTaskDate = new QHBoxLayout();
        addTaskDate->setObjectName(QString::fromUtf8("addTaskDate"));
        dateTxt = new QLabel(AddT);
        dateTxt->setObjectName(QString::fromUtf8("dateTxt"));
        dateTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskDate->addWidget(dateTxt);

        taskDateInput = new QLineEdit(AddT);
        taskDateInput->setObjectName(QString::fromUtf8("taskDateInput"));
        taskDateInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskDate->addWidget(taskDateInput);


        verticalLayout_2->addLayout(addTaskDate);

        addTBtn = new QPushButton(AddT);
        addTBtn->setObjectName(QString::fromUtf8("addTBtn"));
        sizePolicy1.setHeightForWidth(addTBtn->sizePolicy().hasHeightForWidth());
        addTBtn->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addTBtn->setPalette(palette7);
        addTBtn->setFont(font);
        addTBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: grey;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: grey;\n"
"	color: white;\n"
"}"));

        verticalLayout_2->addWidget(addTBtn);

        TaskDisplay = new QListWidget(groupBox);
        TaskDisplay->setObjectName(QString::fromUtf8("TaskDisplay"));
        TaskDisplay->setGeometry(QRect(483, 50, 217, 281));
        TaskDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"}"));
        AddSubTask = new QGroupBox(groupBox);
        AddSubTask->setObjectName(QString::fromUtf8("AddSubTask"));
        AddSubTask->setGeometry(QRect(483, 50, 217, 281));
        AddSubTask->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(AddSubTask);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addSubTaskTitle = new QLabel(AddSubTask);
        addSubTaskTitle->setObjectName(QString::fromUtf8("addSubTaskTitle"));
        sizePolicy1.setHeightForWidth(addSubTaskTitle->sizePolicy().hasHeightForWidth());
        addSubTaskTitle->setSizePolicy(sizePolicy1);
        addSubTaskTitle->setFont(font1);
        addSubTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addSubTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(addSubTaskTitle);

        addSubTaskName = new QHBoxLayout();
        addSubTaskName->setObjectName(QString::fromUtf8("addSubTaskName"));
        subTaskNameTxt = new QLabel(AddSubTask);
        subTaskNameTxt->setObjectName(QString::fromUtf8("subTaskNameTxt"));
        subTaskNameTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addSubTaskName->addWidget(subTaskNameTxt);

        subTaskNameInput = new QLineEdit(AddSubTask);
        subTaskNameInput->setObjectName(QString::fromUtf8("subTaskNameInput"));
        subTaskNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addSubTaskName->addWidget(subTaskNameInput);


        verticalLayout_3->addLayout(addSubTaskName);

        addSubTaskBtn = new QPushButton(AddSubTask);
        addSubTaskBtn->setObjectName(QString::fromUtf8("addSubTaskBtn"));
        sizePolicy1.setHeightForWidth(addSubTaskBtn->sizePolicy().hasHeightForWidth());
        addSubTaskBtn->setSizePolicy(sizePolicy1);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addSubTaskBtn->setPalette(palette8);
        addSubTaskBtn->setFont(font);
        addSubTaskBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: grey;\n"
"	padding-top: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"	margin-bottom: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: grey;\n"
"	color: white;\n"
"}"));

        verticalLayout_3->addWidget(addSubTaskBtn);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 131, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 20, 71, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(540, 20, 111, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(30, 20, 191, 41));
        QFont font2;
        font2.setPointSize(20);
        Title->setFont(font2);
        Title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #aad8e5;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 10px;\n"
"	padding-right: 10px;\n"
"	border-radius: 20px;\n"
"}"));
        Title->setAlignment(Qt::AlignCenter);
        LogOut = new QPushButton(centralwidget);
        LogOut->setObjectName(QString::fromUtf8("LogOut"));
        LogOut->setGeometry(QRect(640, 40, 111, 21));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        LogOut->setPalette(palette9);
        LogOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: gray;\n"
"	color: white;\n"
"	padding-top: 0px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border-radius: 10%;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: gray;\n"
"}"));
        TaskHub->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TaskHub);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TaskHub->setMenuBar(menubar);
        statusbar = new QStatusBar(TaskHub);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TaskHub->setStatusBar(statusbar);

        retranslateUi(TaskHub);

        QMetaObject::connectSlotsByName(TaskHub);
    } // setupUi

    void retranslateUi(QMainWindow *TaskHub)
    {
        TaskHub->setWindowTitle(QCoreApplication::translate("TaskHub", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        Menu->setTitle(QString());
        addTaskList->setText(QCoreApplication::translate("TaskHub", "A D D  T A S K L I S T", nullptr));
        deleteSubTask->setText(QCoreApplication::translate("TaskHub", "D E L E T E  S U B  T A S K", nullptr));
        addSubTask->setText(QCoreApplication::translate("TaskHub", "A D D  S U B T A S K", nullptr));
        addTask->setText(QCoreApplication::translate("TaskHub", "A D D  T A S K", nullptr));
        deleteTaskList->setText(QCoreApplication::translate("TaskHub", "D E L E T E  T A S K L I S T", nullptr));
        deleteTask->setText(QCoreApplication::translate("TaskHub", "D E L E T E  T A S K", nullptr));
        AddTL->setTitle(QString());
        addTaskListTitle->setText(QCoreApplication::translate("TaskHub", "T A S K  L I S T", nullptr));
        taskListNameTxt->setText(QCoreApplication::translate("TaskHub", "N A M E:", nullptr));
        catTxt->setText(QCoreApplication::translate("TaskHub", "C A T E G O R Y:", nullptr));
        addTLBtn->setText(QCoreApplication::translate("TaskHub", "A D D ", nullptr));
        AddT->setTitle(QString());
        addTaskTitle->setText(QCoreApplication::translate("TaskHub", "T A S K", nullptr));
        taskTxt->setText(QCoreApplication::translate("TaskHub", "N A M E:", nullptr));
        noteTxt->setText(QCoreApplication::translate("TaskHub", "N O T E:", nullptr));
        dateTxt->setText(QCoreApplication::translate("TaskHub", "D U E  D A T E:", nullptr));
        addTBtn->setText(QCoreApplication::translate("TaskHub", "A D D ", nullptr));
        AddSubTask->setTitle(QString());
        addSubTaskTitle->setText(QCoreApplication::translate("TaskHub", "S U B T A S K", nullptr));
        subTaskNameTxt->setText(QCoreApplication::translate("TaskHub", "N A M E:", nullptr));
        addSubTaskBtn->setText(QCoreApplication::translate("TaskHub", "A D D ", nullptr));
        label->setText(QCoreApplication::translate("TaskHub", "T A S K  L I S T S", nullptr));
        label_2->setText(QCoreApplication::translate("TaskHub", "T A S K S", nullptr));
        label_3->setText(QCoreApplication::translate("TaskHub", "C U R R E N T", nullptr));
        Title->setText(QCoreApplication::translate("TaskHub", "T A S K  B U D D Y", nullptr));
        LogOut->setText(QCoreApplication::translate("TaskHub", "L O G  O U T", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskHub: public Ui_TaskHub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKHUB_H
