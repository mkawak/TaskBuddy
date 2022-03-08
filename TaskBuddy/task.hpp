#ifndef __TASK_HPP__
#define __TASK_HPP__

#include <string>
#include <iostream>
#include <vector>
#include "subtask.hpp"

using namespace std;

class Task
{
    //friend ostream& operator << (ostream&, const Task&);
    //friend istream& operator >> (istream&, Task&);

private:

    string taskName;
    string taskNote;
    string taskDate;

public:

    Task();
    ~Task();
    Task& setTaskName(string);
    Task& setTaskNote(string);
    Task& setTaskDate(string);

    string getTaskName() const;
    string getTaskNote() const;
    string getTaskDate() const;

    void addSubTask(SubTask);
    void deleteSubTask(int);

    vector<SubTask> subTaskList;
};
#endif //__TASK_HPP__
