#ifndef TASKLIST_H
#define TASKLIST_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TaskList{
	public:
	std::string getListName();
	std::string getCategory();
	int counter();
	void countUp();
	void addTask();
	void coundDown();
	void deleteTask();
	void displayList();
	protected:

	private:
	vector<Task> list;
	std::string listName;
	std::string category;
	int counter;
};

#endif
