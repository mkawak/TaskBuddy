#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
UserAccount(){
	this->userName = "None";
	this->counter = 0;
}
UserAccount(std::string nam){
	this->userName = nam;
	this->counter = 0;
}
void setUserName(std::string n){this->userName = n;}
std::string getUserName(){return this->userName;}
int counter(){return this->list.size;}
void countUp(){this->counter = this->counter+1;}
void addTaskList(TaskList t){list.push_back(t);}
void coundDown(){this->counter = this->couter-1}
void deleteTaskList(TaskList t){
	for(int i = 0; i < this->list.size()-1; ++i){
                if(this->list.at(i) == t){
                        list.erase(list.begin()+(i-1));
                }
        }

}
void displayTaskLists(){
	for(int i = 0; i < this->list.size()-1; ++i){
                cout << this->list.at(i) << endl;
        }

}

