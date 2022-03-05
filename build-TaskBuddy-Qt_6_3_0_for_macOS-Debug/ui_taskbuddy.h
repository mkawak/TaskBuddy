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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *label;
    QHBoxLayout *UserName;
    QLabel *UserNameTxt;
    QLineEdit *UserNameInput;
    QPushButton *LoginButton;
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
        SignIn->setGeometry(QRect(220, 140, 331, 161));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibre")});
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
        label = new QLabel(SignIn);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

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
"}"));

        verticalLayout->addWidget(LoginButton);

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
        label->setText(QCoreApplication::translate("TaskBuddy", "S I G N  I N", nullptr));
        UserNameTxt->setText(QCoreApplication::translate("TaskBuddy", "U S E R N A M E :", nullptr));
        LoginButton->setText(QCoreApplication::translate("TaskBuddy", "L O G I N", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskBuddy: public Ui_TaskBuddy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKBUDDY_H
