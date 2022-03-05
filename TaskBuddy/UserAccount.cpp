#include <string>
#include <iostream>
#include <vector>
#include <cmath>

#include "UserAccount.hpp"

using namespace std;

UserAccount::UserAccount(){
	this->userName = "None";
	this->counter = 0;
}

UserAccount::UserAccount(std::string nam){
	this->userName = nam;
	this->counter = 0;
}

void UserAccount::setUserName(std::string n){
    this->userName = n;
}

std::string UserAccount::getUserName(){
    return this->userName;
}

int UserAccount::accCounter(){
    return this->list.size();
}

void UserAccount::countUp(){
    this->counter = this->counter+1;
}

void UserAccount::addTaskList(TaskList t){
    list.push_back(t);
}

void UserAccount::coundDown(){
    this->counter = this->counter-1;
}

void UserAccount::deleteTaskList(TaskList t){
	for(int i = 0; i < this->list.size()-1; ++i){
               // if(this->list.at(i) == t){
                       // list.erase(list.begin()+(i-1));
                //}
        }
}
void UserAccount::displayTaskLists(){
	for(int i = 0; i < this->list.size()-1; ++i){
               // cout << this->list.at(i) << endl;
        }

}

