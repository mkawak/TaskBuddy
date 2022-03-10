#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <QDebug>

#include "UserAccount.hpp"

using namespace std;

UserAccount::UserAccount(){
	this->userName = "None";
}

UserAccount::UserAccount(std::string nam){
	this->userName = nam;
}

void UserAccount::setUserName(std::string n){
    this->userName = n;
}

std::string UserAccount::getUserName(){
    return this->userName;
}

void UserAccount::addTaskList(TaskList t){
    list.push_back(t);
}

vector<TaskList> UserAccount::getTaskList(){
    return this->list;
}

void UserAccount::deleteTaskList(unsigned int index){
    qDebug() << "Delete func called";
    for(unsigned int i = 0; i < this->list.size(); ++i){
        if (i == index){
            list.erase(list.begin()+(i));
            qDebug() << "List deleted";
        }
    }
}


