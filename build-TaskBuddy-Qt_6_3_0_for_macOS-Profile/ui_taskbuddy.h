/********************************************************************************
** Form generated from reading UI file 'taskbuddy.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKBUDDY_H
#define UI_TASKBUDDY_H

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

class Ui_TaskBuddy
{
public:
    QWidget *centralwidget;
    QGroupBox *SignIn;
    QVBoxLayout *verticalLayout;
    QLabel *SignInTxt;
    QHBoxLayout *UserName;
    QLabel *UserNameTxt;
    QLineEdit *UserNameInput;
    QPushButton *LoginButton;
    QPushButton *CreateAccButton;
    QGroupBox *taskHub;
    QGroupBox *groupBox;
    QGroupBox *Menu;
    QGridLayout *gridLayout_2;
    QPushButton *addTaskMenuBtn;
    QPushButton *showTaskMenuBtn;
    QPushButton *showSubTasks;
    QPushButton *deleteSTMenuBtn;
    QPushButton *addSTMenuBtn;
    QPushButton *deleteTaskMenuBtn;
    QPushButton *deleteTLMenuBtn;
    QPushButton *addTLMenuBtn;
    QListWidget *TaskListsDisplay;
    QGroupBox *AddTL;
    QVBoxLayout *verticalLayout_5;
    QLabel *addTaskListTitle;
    QHBoxLayout *addTaskListName;
    QLabel *taskListNameTxt;
    QLineEdit *taskListNameInput;
    QHBoxLayout *addTaskListCat;
    QLabel *catTxt;
    QLineEdit *taskListCatInput;
    QPushButton *addTLBtn;
    QListWidget *TasksDisplay;
    QGroupBox *AddT;
    QVBoxLayout *verticalLayout_6;
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
    QListWidget *SubTaskDisplay;
    QGroupBox *AddSubTask;
    QVBoxLayout *verticalLayout_7;
    QLabel *addSubTaskTitle;
    QHBoxLayout *addSubTaskName;
    QLabel *subTaskNameTxt;
    QLineEdit *subTaskNameInput;
    QPushButton *addSubTaskBtn;
    QLabel *TaskListsTitle;
    QLabel *TasksTitle;
    QLabel *SubTasksTitle;
    QPushButton *LogOut;
    QLabel *Title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TaskBuddy)
    {
        if (TaskBuddy->objectName().isEmpty())
            TaskBuddy->setObjectName(QString::fromUtf8("TaskBuddy"));
        TaskBuddy->resize(800, 600);
        centralwidget = new QWidget(TaskBuddy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SignIn = new QGroupBox(centralwidget);
        SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->setGeometry(QRect(230, 190, 331, 211));
        QFont font;
        font.setPointSize(18);
        SignIn->setFont(font);
        SignIn->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #aad8e5;\n"
"	color: white;\n"
"	padding: 5px;\n"
"	border-radius: 10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(SignIn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SignInTxt = new QLabel(SignIn);
        SignInTxt->setObjectName(QString::fromUtf8("SignInTxt"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignInTxt->sizePolicy().hasHeightForWidth());
        SignInTxt->setSizePolicy(sizePolicy);
        SignInTxt->setFont(font);
        SignInTxt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        SignInTxt->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SignInTxt);

        UserName = new QHBoxLayout();
        UserName->setObjectName(QString::fromUtf8("UserName"));
        UserNameTxt = new QLabel(SignIn);
        UserNameTxt->setObjectName(QString::fromUtf8("UserNameTxt"));
        UserNameTxt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));

        UserName->addWidget(UserNameTxt);

        UserNameInput = new QLineEdit(SignIn);
        UserNameInput->setObjectName(QString::fromUtf8("UserNameInput"));
        UserNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"	color: black;\n"
"	border: 1px solid white;\n"
"	border-radius: 5px;\n"
"}"));

        UserName->addWidget(UserNameInput);


        verticalLayout->addLayout(UserName);

        LoginButton = new QPushButton(SignIn);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setFont(font);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: gray;\n"
"	border-radius: 5px;\n"
"	padding-top: 10px;\n"
"	padding-bottom: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: gray;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(LoginButton);

        CreateAccButton = new QPushButton(SignIn);
        CreateAccButton->setObjectName(QString::fromUtf8("CreateAccButton"));
        CreateAccButton->setFont(font);
        CreateAccButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: gray;\n"
"	border-radius: 5px;\n"
"	padding-top: 10px;\n"
"	padding-bottom: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: gray;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(CreateAccButton);

        taskHub = new QGroupBox(centralwidget);
        taskHub->setObjectName(QString::fromUtf8("taskHub"));
        taskHub->setGeometry(QRect(10, 0, 781, 561));
        groupBox = new QGroupBox(taskHub);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 70, 741, 481));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #d1eaf1;\n"
"	border-radius: 30px;\n"
"}"));
        Menu = new QGroupBox(groupBox);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(28, 340, 681, 141));
        gridLayout_2 = new QGridLayout(Menu);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        addTaskMenuBtn = new QPushButton(Menu);
        addTaskMenuBtn->setObjectName(QString::fromUtf8("addTaskMenuBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addTaskMenuBtn->sizePolicy().hasHeightForWidth());
        addTaskMenuBtn->setSizePolicy(sizePolicy1);
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
        addTaskMenuBtn->setPalette(palette);
        addTaskMenuBtn->setFont(font);
        addTaskMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(addTaskMenuBtn, 1, 1, 1, 1);

        showTaskMenuBtn = new QPushButton(Menu);
        showTaskMenuBtn->setObjectName(QString::fromUtf8("showTaskMenuBtn"));
        sizePolicy1.setHeightForWidth(showTaskMenuBtn->sizePolicy().hasHeightForWidth());
        showTaskMenuBtn->setSizePolicy(sizePolicy1);
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
        showTaskMenuBtn->setPalette(palette1);
        showTaskMenuBtn->setFont(font);
        showTaskMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(showTaskMenuBtn, 0, 1, 1, 1);

        showSubTasks = new QPushButton(Menu);
        showSubTasks->setObjectName(QString::fromUtf8("showSubTasks"));
        sizePolicy1.setHeightForWidth(showSubTasks->sizePolicy().hasHeightForWidth());
        showSubTasks->setSizePolicy(sizePolicy1);
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
        showSubTasks->setPalette(palette2);
        showSubTasks->setFont(font);
        showSubTasks->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(showSubTasks, 0, 2, 1, 1);

        deleteSTMenuBtn = new QPushButton(Menu);
        deleteSTMenuBtn->setObjectName(QString::fromUtf8("deleteSTMenuBtn"));
        sizePolicy1.setHeightForWidth(deleteSTMenuBtn->sizePolicy().hasHeightForWidth());
        deleteSTMenuBtn->setSizePolicy(sizePolicy1);
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
        deleteSTMenuBtn->setPalette(palette3);
        deleteSTMenuBtn->setFont(font);
        deleteSTMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(deleteSTMenuBtn, 2, 2, 1, 1);

        addSTMenuBtn = new QPushButton(Menu);
        addSTMenuBtn->setObjectName(QString::fromUtf8("addSTMenuBtn"));
        sizePolicy1.setHeightForWidth(addSTMenuBtn->sizePolicy().hasHeightForWidth());
        addSTMenuBtn->setSizePolicy(sizePolicy1);
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
        addSTMenuBtn->setPalette(palette4);
        addSTMenuBtn->setFont(font);
        addSTMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(addSTMenuBtn, 1, 2, 1, 1);

        deleteTaskMenuBtn = new QPushButton(Menu);
        deleteTaskMenuBtn->setObjectName(QString::fromUtf8("deleteTaskMenuBtn"));
        sizePolicy1.setHeightForWidth(deleteTaskMenuBtn->sizePolicy().hasHeightForWidth());
        deleteTaskMenuBtn->setSizePolicy(sizePolicy1);
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
        deleteTaskMenuBtn->setPalette(palette5);
        deleteTaskMenuBtn->setFont(font);
        deleteTaskMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(deleteTaskMenuBtn, 2, 1, 1, 1);

        deleteTLMenuBtn = new QPushButton(Menu);
        deleteTLMenuBtn->setObjectName(QString::fromUtf8("deleteTLMenuBtn"));
        sizePolicy1.setHeightForWidth(deleteTLMenuBtn->sizePolicy().hasHeightForWidth());
        deleteTLMenuBtn->setSizePolicy(sizePolicy1);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        deleteTLMenuBtn->setPalette(palette6);
        deleteTLMenuBtn->setFont(font);
        deleteTLMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(deleteTLMenuBtn, 2, 0, 1, 1);

        addTLMenuBtn = new QPushButton(Menu);
        addTLMenuBtn->setObjectName(QString::fromUtf8("addTLMenuBtn"));
        sizePolicy1.setHeightForWidth(addTLMenuBtn->sizePolicy().hasHeightForWidth());
        addTLMenuBtn->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        addTLMenuBtn->setPalette(palette7);
        addTLMenuBtn->setFont(font);
        addTLMenuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_2->addWidget(addTLMenuBtn, 0, 0, 2, 1);

        TaskListsDisplay = new QListWidget(groupBox);
        TaskListsDisplay->setObjectName(QString::fromUtf8("TaskListsDisplay"));
        TaskListsDisplay->setGeometry(QRect(37, 50, 217, 281));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibre")});
        font1.setPointSize(14);
        TaskListsDisplay->setFont(font1);
        TaskListsDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"	padding:20px;\n"
"}\n"
"\n"
"QListWidget::item{\n"
"	\n"
"\n"
"}"));
        AddTL = new QGroupBox(groupBox);
        AddTL->setObjectName(QString::fromUtf8("AddTL"));
        AddTL->setGeometry(QRect(37, 50, 217, 281));
        AddTL->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(AddTL);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        addTaskListTitle = new QLabel(AddTL);
        addTaskListTitle->setObjectName(QString::fromUtf8("addTaskListTitle"));
        sizePolicy.setHeightForWidth(addTaskListTitle->sizePolicy().hasHeightForWidth());
        addTaskListTitle->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        addTaskListTitle->setFont(font2);
        addTaskListTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskListTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(addTaskListTitle);

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


        verticalLayout_5->addLayout(addTaskListName);

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


        verticalLayout_5->addLayout(addTaskListCat);

        addTLBtn = new QPushButton(AddTL);
        addTLBtn->setObjectName(QString::fromUtf8("addTLBtn"));
        sizePolicy.setHeightForWidth(addTLBtn->sizePolicy().hasHeightForWidth());
        addTLBtn->setSizePolicy(sizePolicy);
        QPalette palette8;
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
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
        addTLBtn->setPalette(palette8);
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

        verticalLayout_5->addWidget(addTLBtn);

        TasksDisplay = new QListWidget(groupBox);
        TasksDisplay->setObjectName(QString::fromUtf8("TasksDisplay"));
        TasksDisplay->setGeometry(QRect(260, 50, 217, 281));
        TasksDisplay->setFont(font1);
        TasksDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"	padding:20px;\n"
"}"));
        AddT = new QGroupBox(groupBox);
        AddT->setObjectName(QString::fromUtf8("AddT"));
        AddT->setGeometry(QRect(260, 50, 217, 281));
        AddT->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(AddT);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        addTaskTitle = new QLabel(AddT);
        addTaskTitle->setObjectName(QString::fromUtf8("addTaskTitle"));
        sizePolicy.setHeightForWidth(addTaskTitle->sizePolicy().hasHeightForWidth());
        addTaskTitle->setSizePolicy(sizePolicy);
        addTaskTitle->setFont(font2);
        addTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(addTaskTitle);

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


        verticalLayout_6->addLayout(addTaskName);

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


        verticalLayout_6->addLayout(addTaskNote);

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


        verticalLayout_6->addLayout(addTaskDate);

        addTBtn = new QPushButton(AddT);
        addTBtn->setObjectName(QString::fromUtf8("addTBtn"));
        sizePolicy.setHeightForWidth(addTBtn->sizePolicy().hasHeightForWidth());
        addTBtn->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addTBtn->setPalette(palette9);
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

        verticalLayout_6->addWidget(addTBtn);

        SubTaskDisplay = new QListWidget(groupBox);
        SubTaskDisplay->setObjectName(QString::fromUtf8("SubTaskDisplay"));
        SubTaskDisplay->setGeometry(QRect(483, 50, 217, 281));
        SubTaskDisplay->setFont(font1);
        SubTaskDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"	padding:20px;\n"
"}\n"
""));
        AddSubTask = new QGroupBox(groupBox);
        AddSubTask->setObjectName(QString::fromUtf8("AddSubTask"));
        AddSubTask->setGeometry(QRect(483, 50, 217, 281));
        AddSubTask->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(AddSubTask);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        addSubTaskTitle = new QLabel(AddSubTask);
        addSubTaskTitle->setObjectName(QString::fromUtf8("addSubTaskTitle"));
        sizePolicy.setHeightForWidth(addSubTaskTitle->sizePolicy().hasHeightForWidth());
        addSubTaskTitle->setSizePolicy(sizePolicy);
        addSubTaskTitle->setFont(font2);
        addSubTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addSubTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(addSubTaskTitle);

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


        verticalLayout_7->addLayout(addSubTaskName);

        addSubTaskBtn = new QPushButton(AddSubTask);
        addSubTaskBtn->setObjectName(QString::fromUtf8("addSubTaskBtn"));
        sizePolicy.setHeightForWidth(addSubTaskBtn->sizePolicy().hasHeightForWidth());
        addSubTaskBtn->setSizePolicy(sizePolicy);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addSubTaskBtn->setPalette(palette10);
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

        verticalLayout_7->addWidget(addSubTaskBtn);

        TaskListsTitle = new QLabel(groupBox);
        TaskListsTitle->setObjectName(QString::fromUtf8("TaskListsTitle"));
        TaskListsTitle->setGeometry(QRect(90, 20, 131, 16));
        TaskListsTitle->setFont(font);
        TaskListsTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        TasksTitle = new QLabel(groupBox);
        TasksTitle->setObjectName(QString::fromUtf8("TasksTitle"));
        TasksTitle->setGeometry(QRect(330, 20, 71, 16));
        TasksTitle->setFont(font);
        TasksTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        SubTasksTitle = new QLabel(groupBox);
        SubTasksTitle->setObjectName(QString::fromUtf8("SubTasksTitle"));
        SubTasksTitle->setGeometry(QRect(530, 20, 121, 16));
        SubTasksTitle->setFont(font);
        SubTasksTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        LogOut = new QPushButton(taskHub);
        LogOut->setObjectName(QString::fromUtf8("LogOut"));
        LogOut->setGeometry(QRect(630, 40, 111, 21));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        LogOut->setPalette(palette11);
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
        Title = new QLabel(taskHub);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(20, 20, 191, 41));
        QFont font3;
        font3.setPointSize(20);
        Title->setFont(font3);
        Title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: #aad8e5;\n"
"	color: white;\n"
"	padding-top: 5px;\n"
"	padding-left: 10px;\n"
"	padding-right: 10px;\n"
"	border-radius: 20px;\n"
"}"));
        Title->setAlignment(Qt::AlignCenter);
        TaskBuddy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TaskBuddy);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TaskBuddy->setMenuBar(menubar);
        statusbar = new QStatusBar(TaskBuddy);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TaskBuddy->setStatusBar(statusbar);

        retranslateUi(TaskBuddy);

        QMetaObject::connectSlotsByName(TaskBuddy);
    } // setupUi

    void retranslateUi(QMainWindow *TaskBuddy)
    {
        TaskBuddy->setWindowTitle(QCoreApplication::translate("TaskBuddy", "TaskBuddy", nullptr));
        SignIn->setTitle(QString());
        SignInTxt->setText(QCoreApplication::translate("TaskBuddy", "S I G N  I N", nullptr));
        UserNameTxt->setText(QCoreApplication::translate("TaskBuddy", "U S E R N A M E :", nullptr));
        LoginButton->setText(QCoreApplication::translate("TaskBuddy", "L O G I N", nullptr));
        CreateAccButton->setText(QCoreApplication::translate("TaskBuddy", "C R E A T E  A C C O U N T", nullptr));
        taskHub->setTitle(QString());
        groupBox->setTitle(QString());
        Menu->setTitle(QString());
        addTaskMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D  T A S K", nullptr));
        showTaskMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "S H O W  T A S K S", nullptr));
        showSubTasks->setText(QCoreApplication::translate("TaskBuddy", "S H O W  S U B T A S K S", nullptr));
        deleteSTMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "D E L E T E  S U B  T A S K", nullptr));
        addSTMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D  S U B T A S K", nullptr));
        deleteTaskMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "D E L E T E  T A S K", nullptr));
        deleteTLMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "D E L E T E  T A S K L I S T", nullptr));
        addTLMenuBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D  T A S K L I S T", nullptr));
        AddTL->setTitle(QString());
        addTaskListTitle->setText(QCoreApplication::translate("TaskBuddy", "T A S K  L I S T", nullptr));
        taskListNameTxt->setText(QCoreApplication::translate("TaskBuddy", "N A M E:", nullptr));
        catTxt->setText(QCoreApplication::translate("TaskBuddy", "C A T E G O R Y:", nullptr));
        addTLBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D ", nullptr));
        AddT->setTitle(QString());
        addTaskTitle->setText(QCoreApplication::translate("TaskBuddy", "T A S K", nullptr));
        taskTxt->setText(QCoreApplication::translate("TaskBuddy", "N A M E:", nullptr));
        noteTxt->setText(QCoreApplication::translate("TaskBuddy", "N O T E:", nullptr));
        dateTxt->setText(QCoreApplication::translate("TaskBuddy", "D U E  D A T E:", nullptr));
        addTBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D ", nullptr));
        AddSubTask->setTitle(QString());
        addSubTaskTitle->setText(QCoreApplication::translate("TaskBuddy", "S U B T A S K", nullptr));
        subTaskNameTxt->setText(QCoreApplication::translate("TaskBuddy", "N A M E:", nullptr));
        addSubTaskBtn->setText(QCoreApplication::translate("TaskBuddy", "A D D ", nullptr));
        TaskListsTitle->setText(QCoreApplication::translate("TaskBuddy", "T A S K  L I S T S", nullptr));
        TasksTitle->setText(QCoreApplication::translate("TaskBuddy", "T A S K S", nullptr));
        SubTasksTitle->setText(QCoreApplication::translate("TaskBuddy", "S U B T A S K S", nullptr));
        LogOut->setText(QCoreApplication::translate("TaskBuddy", "L O G  O U T", nullptr));
        Title->setText(QCoreApplication::translate("TaskBuddy", "T A S K  B U D D Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskBuddy: public Ui_TaskBuddy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKBUDDY_H
