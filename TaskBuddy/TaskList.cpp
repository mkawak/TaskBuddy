#include "TaskList.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
TaskList::TaskList()
{
    this->listName = "none";
    this->category = "none";
}
TaskList::TaskList(std::string nam, std::string cat)
{
    this->listName = nam;
    this->category = cat;
}

void TaskList::setListName(std::string n)
{
    this->listName = n;
}

void TaskList::setListCategory(std::string c)
{
    this->category = c;
}

string TaskList::getListName()
{
    return this->listName;
}

string TaskList::getListCategory()
{
    return this->category;
}

void TaskList::addTask(Task t)
{
    tList.push_back(t);
}

void TaskList::setTask(vector<Task> t){
    tList = t;
}

vector<Task> TaskList::getTasks()
{
    return this->tList;
}

void TaskList::deleteTask(string str)
{
    for (unsigned int i = 0; i < this->tList.size(); ++i)
    {
        if (this->tList.at(i).getTaskName() == str)
        {
            tList.erase(tList.begin() + (i));
        }
    }
}
