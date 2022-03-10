#ifndef TASKLIST_H
#define TASKLIST_H

#include "task.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TaskList{
<<<<<<< HEAD
	public:
    TaskList();
    TaskList(std::string nam, std::string cat);

	void setListName(std::string n);
    void setListCategory(std::string c);

    string getListName();
    string getListCategory();

    void addTask(Task t);
    void deleteTask(int);
    vector<Task> tList;
	protected:

	private:
	std::string listName;
	std::string category;

=======
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
	void deleteTask(int);
	vector<Task> getTasks();
	
>>>>>>> d01688b02a9d640d312232481646c9489e105744
};

#endif
