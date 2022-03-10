// Majd Kawak
// Date 02/15/2022
// Assignment: Final Project (Task Buddy)
// Class: CS100

#include "task.hpp"
#include <ctime>
#include <iostream>

using namespace std;

Task::Task()
{
    this->taskName = "";
    this->taskNote = "";
    this->taskDate = "";
}

Task::Task(string nm, string nt, string dt)
{
    this->taskName = nm;
    this->taskNote = nt;
    this->taskDate = dt;
}

Task ::~Task()
{
}

Task &Task::setTaskName(string taskNamePassed)
{
    this->taskName = taskNamePassed;
    return *this;
}

Task &Task::setTaskNote(string note)
{
    this->taskNote = note;
    return *this;
}
Task &Task::setTaskDate(string date)
{
    this->taskDate = date;
    return *this;
}

string Task::getTaskName() const
{
    return this->taskName;
}

string Task::getTaskNote() const
{
    return this->taskNote;
}

string Task::getTaskDate() const
{
    return this->taskDate;
}

vector<SubTask> Task::getSubTaskList()
{
    return this->subTaskList;
}

void Task::addSubTask(SubTask s)
{
    subTaskList.push_back(s);
}

void Task::deleteSubTask(string str)
{
    for (unsigned int i = 0; i < this->subTaskList.size(); ++i)
    {
        if (this->subTaskList.at(i).getSubTaskName() == str)
        {
            subTaskList.erase(subTaskList.begin() + (i));
        }
    }
}
