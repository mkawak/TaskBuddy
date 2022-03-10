#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
#include <iostream>
#include <vector>
#include "subtask.hpp"

using namespace std;

class Task
{

private:

    string taskName;
    string taskNote;
    string taskDate;
    vector<SubTask> subTaskList;

public:

    Task();
    Task(string, string, string);
    ~Task();

    Task& setTaskName(string);
    Task& setTaskNote(string);
    Task& setTaskDate(string);

    string getTaskName() const;
    string getTaskNote() const;
    string getTaskDate() const;

    vector<SubTask> getSubTaskList();

    void setSubTask(vector<SubTask> s);
    void addSubTask(SubTask);
    void deleteSubTask(string);


};
#endif //__TASK_HPP__
