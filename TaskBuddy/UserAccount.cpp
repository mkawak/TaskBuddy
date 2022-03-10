#include <string>
#include <iostream>
#include <vector>
#include <cmath>

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

void UserAccount::deleteTaskList(string str){
    for(unsigned int i = 0; i < this->list.size(); ++i){
        if (this->list.at(i).getListName() == str){
            list.erase(list.begin()+(i));
        }
    }
}


