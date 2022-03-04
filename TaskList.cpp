#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
Tasklist(){
	this->listName = "none";
	this->category = "none";
	this->counter = 0;
}
Tasklist(std::string nam, std::string cat){
	this->listName = nam;
        this->category = cat;
	this->counter = 0;
}
void setListName(std::string n){this->listName = n;}
void setCategory(std::string c){this->category = c;}
string getListName(){return this->listName;}
string getCategory(){return this->category;}
int counter(){return this->list.size();}
void countUp(){this->counter = this->counter + 1;}
void addTask(task t){list.push_back(t);}
void coundDown(){this->counter = this->counter - 1;}
void deleteTask(Task t){
	for(int i = 0; i < this->list.size()-1; ++i){
		if(this->list.at(i) == t){
			list.erase(list.begin()+(i-1));
		}
	}
}
void displayList(){
	cout << getListName() << ", " << getListCategory() << ":" << endl;
	for(int i = 0; i < this->list.size()-1; ++i){
		cout << this->list.at(i) << endl;
	}

}
