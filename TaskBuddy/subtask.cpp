// Majd Kawak
// Date 02/10/2022
// Assignment: Final Project (Task Buddy)
// Class: CS100

#include "subtask.hpp"

#include <iostream>

using namespace std;

SubTask::SubTask()
{
    this->name = "";
}

SubTask::~SubTask()
{
    //delete name;
}

SubTask& SubTask::setSubTaskName(string s)
{
    this->name = s;
    return *this;
}

string SubTask::getSubTaskName() const
{
    return this->name;
}


