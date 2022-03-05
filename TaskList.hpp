#ifndef TASKLIST_H
#define TASKLIST_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TaskList{
	public:
	Tasklist();
	Tasklist(std::string nam, std::string cat);
	void setListName(std::string n);
	void setCategory(std::string c);
	void setListName();
	void setCategory();
	int counter();
	void countUp();
	void addTask();
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
