#ifndef TASKLIST_H
#define TASKLIST_H

#include "task.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TaskList{
	public:
    TaskList();
    TaskList(std::string nam, std::string cat);
	void setListName(std::string n);
    void setListCategory(std::string c);
	void setListName();
    string getListName();
    void setListCategory();
    string getListCategory();
    int listCounter();
	void countUp();
    void addTask(Task t);
	void coundDown();
	void deleteTask(Task t);
	void displayList();
	protected:

	private:
	vector<Task> list;
	std::string listName;
	std::string category;
	int counter;
};

#endif
