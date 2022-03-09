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
        TaskBuddy->resize(1649, 881);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TaskBuddy->sizePolicy().hasHeightForWidth());
        TaskBuddy->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        TaskBuddy->setFont(font);
        centralwidget = new QWidget(TaskBuddy);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SignIn = new QGroupBox(centralwidget);
        SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->setGeometry(QRect(230, 190, 411, 251));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibre")});
        font1.setPointSize(18);
        SignIn->setFont(font1);
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
        sizePolicy.setHeightForWidth(SignInTxt->sizePolicy().hasHeightForWidth());
        SignInTxt->setSizePolicy(sizePolicy);
        SignInTxt->setFont(font1);
        SignInTxt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        SignInTxt->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SignInTxt);

        UserName = new QHBoxLayout();
        UserName->setObjectName(QString::fromUtf8("UserName"));
        UserName->setContentsMargins(10, 40, 10, 40);
        UserNameTxt = new QLabel(SignIn);
        UserNameTxt->setObjectName(QString::fromUtf8("UserNameTxt"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibre")});
        UserNameTxt->setFont(font2);
        UserNameTxt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));

        UserName->addWidget(UserNameTxt);

        UserNameInput = new QLineEdit(SignIn);
        UserNameInput->setObjectName(QString::fromUtf8("UserNameInput"));
        UserNameInput->setFont(font2);
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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LoginButton->sizePolicy().hasHeightForWidth());
        LoginButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibre")});
        font3.setPointSize(14);
        LoginButton->setFont(font3);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: gray;\n"
"	border-radius: 5px;\n"
"	margin-left:10px;\n"
"	margin-right:10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: gray;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(LoginButton);

        CreateAccButton = new QPushButton(SignIn);
        CreateAccButton->setObjectName(QString::fromUtf8("CreateAccButton"));
        sizePolicy1.setHeightForWidth(CreateAccButton->sizePolicy().hasHeightForWidth());
        CreateAccButton->setSizePolicy(sizePolicy1);
        CreateAccButton->setFont(font3);
        CreateAccButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: white;\n"
"	color: gray;\n"
"	border-radius: 5px;\n"
"	margin-left:10px;\n"
"	margin-right:10px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: gray;\n"
"	color: white;\n"
"}"));

        verticalLayout->addWidget(CreateAccButton);

        taskHub = new QGroupBox(centralwidget);
        taskHub->setObjectName(QString::fromUtf8("taskHub"));
        taskHub->setGeometry(QRect(0, 0, 881, 651));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Calibre")});
        font4.setPointSize(12);
        taskHub->setFont(font4);
        groupBox = new QGroupBox(taskHub);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 100, 831, 531));
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #d1eaf1;\n"
"	border-radius: 30px;\n"
"}"));
        Menu = new QGroupBox(groupBox);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(20, 350, 791, 181));
        Menu->setFont(font2);
        gridLayout_2 = new QGridLayout(Menu);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        addTaskMenuBtn = new QPushButton(Menu);
        addTaskMenuBtn->setObjectName(QString::fromUtf8("addTaskMenuBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addTaskMenuBtn->sizePolicy().hasHeightForWidth());
        addTaskMenuBtn->setSizePolicy(sizePolicy2);
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
        addTaskMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(showTaskMenuBtn->sizePolicy().hasHeightForWidth());
        showTaskMenuBtn->setSizePolicy(sizePolicy2);
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
        showTaskMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(showSubTasks->sizePolicy().hasHeightForWidth());
        showSubTasks->setSizePolicy(sizePolicy2);
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
        showSubTasks->setFont(font4);
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
        sizePolicy2.setHeightForWidth(deleteSTMenuBtn->sizePolicy().hasHeightForWidth());
        deleteSTMenuBtn->setSizePolicy(sizePolicy2);
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
        deleteSTMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(addSTMenuBtn->sizePolicy().hasHeightForWidth());
        addSTMenuBtn->setSizePolicy(sizePolicy2);
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
        addSTMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(deleteTaskMenuBtn->sizePolicy().hasHeightForWidth());
        deleteTaskMenuBtn->setSizePolicy(sizePolicy2);
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
        deleteTaskMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(deleteTLMenuBtn->sizePolicy().hasHeightForWidth());
        deleteTLMenuBtn->setSizePolicy(sizePolicy2);
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
        deleteTLMenuBtn->setFont(font4);
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
        sizePolicy2.setHeightForWidth(addTLMenuBtn->sizePolicy().hasHeightForWidth());
        addTLMenuBtn->setSizePolicy(sizePolicy2);
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
        addTLMenuBtn->setFont(font4);
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
        TaskListsDisplay->setGeometry(QRect(30, 50, 251, 291));
        TaskListsDisplay->setFont(font4);
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
        AddTL->setGeometry(QRect(30, 50, 251, 291));
        AddTL->setFont(font2);
        AddTL->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(AddTL);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        addTaskListTitle = new QLabel(AddTL);
        addTaskListTitle->setObjectName(QString::fromUtf8("addTaskListTitle"));
        sizePolicy.setHeightForWidth(addTaskListTitle->sizePolicy().hasHeightForWidth());
        addTaskListTitle->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Calibre")});
        font5.setBold(true);
        addTaskListTitle->setFont(font5);
        addTaskListTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskListTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(addTaskListTitle);

        addTaskListName = new QHBoxLayout();
        addTaskListName->setObjectName(QString::fromUtf8("addTaskListName"));
        addTaskListName->setContentsMargins(-1, 59, -1, 10);
        taskListNameTxt = new QLabel(AddTL);
        taskListNameTxt->setObjectName(QString::fromUtf8("taskListNameTxt"));
        taskListNameTxt->setFont(font2);
        taskListNameTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskListName->addWidget(taskListNameTxt);

        taskListNameInput = new QLineEdit(AddTL);
        taskListNameInput->setObjectName(QString::fromUtf8("taskListNameInput"));
        taskListNameInput->setFont(font2);
        taskListNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskListName->addWidget(taskListNameInput);


        verticalLayout_5->addLayout(addTaskListName);

        addTaskListCat = new QHBoxLayout();
        addTaskListCat->setObjectName(QString::fromUtf8("addTaskListCat"));
        addTaskListCat->setContentsMargins(-1, 10, -1, 59);
        catTxt = new QLabel(AddTL);
        catTxt->setObjectName(QString::fromUtf8("catTxt"));
        catTxt->setFont(font2);
        catTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskListCat->addWidget(catTxt);

        taskListCatInput = new QLineEdit(AddTL);
        taskListCatInput->setObjectName(QString::fromUtf8("taskListCatInput"));
        taskListCatInput->setFont(font2);
        taskListCatInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskListCat->addWidget(taskListCatInput);


        verticalLayout_5->addLayout(addTaskListCat);

        addTLBtn = new QPushButton(AddTL);
        addTLBtn->setObjectName(QString::fromUtf8("addTLBtn"));
        sizePolicy2.setHeightForWidth(addTLBtn->sizePolicy().hasHeightForWidth());
        addTLBtn->setSizePolicy(sizePolicy2);
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
        addTLBtn->setFont(font4);
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
        TasksDisplay->setGeometry(QRect(290, 50, 251, 291));
        TasksDisplay->setFont(font4);
        TasksDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"	padding:20px;\n"
"}"));
        AddT = new QGroupBox(groupBox);
        AddT->setObjectName(QString::fromUtf8("AddT"));
        AddT->setGeometry(QRect(290, 50, 251, 291));
        AddT->setFont(font2);
        AddT->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(AddT);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        addTaskTitle = new QLabel(AddT);
        addTaskTitle->setObjectName(QString::fromUtf8("addTaskTitle"));
        sizePolicy.setHeightForWidth(addTaskTitle->sizePolicy().hasHeightForWidth());
        addTaskTitle->setSizePolicy(sizePolicy);
        addTaskTitle->setFont(font5);
        addTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(addTaskTitle);

        addTaskName = new QHBoxLayout();
        addTaskName->setObjectName(QString::fromUtf8("addTaskName"));
        addTaskName->setContentsMargins(-1, 20, -1, 20);
        taskTxt = new QLabel(AddT);
        taskTxt->setObjectName(QString::fromUtf8("taskTxt"));
        taskTxt->setFont(font2);
        taskTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskName->addWidget(taskTxt);

        taskNameInput = new QLineEdit(AddT);
        taskNameInput->setObjectName(QString::fromUtf8("taskNameInput"));
        taskNameInput->setFont(font2);
        taskNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskName->addWidget(taskNameInput);


        verticalLayout_6->addLayout(addTaskName);

        addTaskNote = new QHBoxLayout();
        addTaskNote->setObjectName(QString::fromUtf8("addTaskNote"));
        addTaskNote->setContentsMargins(-1, 20, -1, 20);
        noteTxt = new QLabel(AddT);
        noteTxt->setObjectName(QString::fromUtf8("noteTxt"));
        noteTxt->setFont(font2);
        noteTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskNote->addWidget(noteTxt);

        taskNoteInput = new QLineEdit(AddT);
        taskNoteInput->setObjectName(QString::fromUtf8("taskNoteInput"));
        taskNoteInput->setFont(font2);
        taskNoteInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskNote->addWidget(taskNoteInput);


        verticalLayout_6->addLayout(addTaskNote);

        addTaskDate = new QHBoxLayout();
        addTaskDate->setObjectName(QString::fromUtf8("addTaskDate"));
        addTaskDate->setContentsMargins(-1, 20, -1, 20);
        dateTxt = new QLabel(AddT);
        dateTxt->setObjectName(QString::fromUtf8("dateTxt"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dateTxt->sizePolicy().hasHeightForWidth());
        dateTxt->setSizePolicy(sizePolicy3);
        dateTxt->setFont(font2);
        dateTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addTaskDate->addWidget(dateTxt);

        taskDateInput = new QLineEdit(AddT);
        taskDateInput->setObjectName(QString::fromUtf8("taskDateInput"));
        taskDateInput->setFont(font2);
        taskDateInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addTaskDate->addWidget(taskDateInput);


        verticalLayout_6->addLayout(addTaskDate);

        addTBtn = new QPushButton(AddT);
        addTBtn->setObjectName(QString::fromUtf8("addTBtn"));
        sizePolicy2.setHeightForWidth(addTBtn->sizePolicy().hasHeightForWidth());
        addTBtn->setSizePolicy(sizePolicy2);
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
        addTBtn->setFont(font4);
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
        SubTaskDisplay->setGeometry(QRect(550, 50, 251, 291));
        SubTaskDisplay->setFont(font4);
        SubTaskDisplay->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: white;\n"
"	border-radius: 30%;\n"
"	padding:20px;\n"
"}\n"
""));
        AddSubTask = new QGroupBox(groupBox);
        AddSubTask->setObjectName(QString::fromUtf8("AddSubTask"));
        AddSubTask->setGeometry(QRect(550, 50, 251, 291));
        AddSubTask->setFont(font2);
        AddSubTask->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	background-color: #7dc3d7;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(AddSubTask);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        addSubTaskTitle = new QLabel(AddSubTask);
        addSubTaskTitle->setObjectName(QString::fromUtf8("addSubTaskTitle"));
        sizePolicy.setHeightForWidth(addSubTaskTitle->sizePolicy().hasHeightForWidth());
        addSubTaskTitle->setSizePolicy(sizePolicy);
        addSubTaskTitle->setFont(font5);
        addSubTaskTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}"));
        addSubTaskTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(addSubTaskTitle);

        addSubTaskName = new QHBoxLayout();
        addSubTaskName->setObjectName(QString::fromUtf8("addSubTaskName"));
        addSubTaskName->setContentsMargins(-1, 83, 9, 83);
        subTaskNameTxt = new QLabel(AddSubTask);
        subTaskNameTxt->setObjectName(QString::fromUtf8("subTaskNameTxt"));
        subTaskNameTxt->setFont(font2);
        subTaskNameTxt->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:gray;\n"
"}"));

        addSubTaskName->addWidget(subTaskNameTxt);

        subTaskNameInput = new QLineEdit(AddSubTask);
        subTaskNameInput->setObjectName(QString::fromUtf8("subTaskNameInput"));
        subTaskNameInput->setFont(font2);
        subTaskNameInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"}"));

        addSubTaskName->addWidget(subTaskNameInput);


        verticalLayout_7->addLayout(addSubTaskName);

        addSubTaskBtn = new QPushButton(AddSubTask);
        addSubTaskBtn->setObjectName(QString::fromUtf8("addSubTaskBtn"));
        sizePolicy2.setHeightForWidth(addSubTaskBtn->sizePolicy().hasHeightForWidth());
        addSubTaskBtn->setSizePolicy(sizePolicy2);
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
        addSubTaskBtn->setFont(font4);
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
        TaskListsTitle->setGeometry(QRect(100, 20, 131, 16));
        TaskListsTitle->setFont(font4);
        TaskListsTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        TaskListsTitle->setAlignment(Qt::AlignCenter);
        TasksTitle = new QLabel(groupBox);
        TasksTitle->setObjectName(QString::fromUtf8("TasksTitle"));
        TasksTitle->setGeometry(QRect(380, 20, 71, 16));
        TasksTitle->setFont(font4);
        TasksTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        TasksTitle->setAlignment(Qt::AlignCenter);
        SubTasksTitle = new QLabel(groupBox);
        SubTasksTitle->setObjectName(QString::fromUtf8("SubTasksTitle"));
        SubTasksTitle->setGeometry(QRect(620, 20, 121, 16));
        SubTasksTitle->setFont(font4);
        SubTasksTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: gray;\n"
"}"));
        SubTasksTitle->setAlignment(Qt::AlignCenter);
        Menu->raise();
        TaskListsDisplay->raise();
        AddTL->raise();
        TasksDisplay->raise();
        AddT->raise();
        SubTaskDisplay->raise();
        TaskListsTitle->raise();
        TasksTitle->raise();
        SubTasksTitle->raise();
        AddSubTask->raise();
        LogOut = new QPushButton(taskHub);
        LogOut->setObjectName(QString::fromUtf8("LogOut"));
        LogOut->setGeometry(QRect(680, 60, 151, 31));
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
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Calibre")});
        font6.setPointSize(10);
        LogOut->setFont(font6);
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
        Title->setGeometry(QRect(30, 30, 231, 61));
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
        menubar->setGeometry(QRect(0, 0, 1649, 20));
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
