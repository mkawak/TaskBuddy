#include "TaskList.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
TaskList::TaskList(){
	this->listName = "none";
	this->category = "none";
	this->counter = 0;
}
TaskList::TaskList(std::string nam, std::string cat){
	this->listName = nam;
        this->category = cat;
	this->counter = 0;
}

void TaskList::setListName(std::string n){
    this->listName = n;
}

void TaskList::setListCategory(std::string c){
    this->category = c;
}

string TaskList::getListName(){
    return this->listName;
}

string TaskList::getListCategory(){
    return this->category;
}

int TaskList::listCounter(){
    return this->list.size();
}

void TaskList::countUp(){
    this->counter = this->counter + 1;
}

void TaskList::addTask(Task t){
    list.push_back(t);
}

void TaskList::coundDown(){
    this->counter = this->counter - 1;
}

void TaskList::deleteTask(Task t){
	for(int i = 0; i < this->list.size()-1; ++i){
        //if(this->list.at(i) == t){
            //list.erase(list.begin()+(i-1));
        //}
	}
}
void TaskList::displayList(){
	cout << getListName() << ", " << getListCategory() << ":" << endl;
	for(int i = 0; i < this->list.size()-1; ++i){
		cout << this->list.at(i) << endl;
	}

}
