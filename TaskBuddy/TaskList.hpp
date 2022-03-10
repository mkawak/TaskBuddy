#ifndef TASKLIST_H
#define TASKLIST_H

#include "task.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TaskList
{

private:
	std::string listName;
	std::string category;
	vector<Task> tList;

public:
	TaskList();
	TaskList(std::string nam, std::string cat);

	void setListName(std::string n);
	void setListCategory(std::string c);
	string getListName();
	string getListCategory();
	void addTask(Task t);
    void setTask(vector<Task>);
	void deleteTask(string);
	vector<Task> getTasks();
};

#endif
