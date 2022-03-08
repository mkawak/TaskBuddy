// Majd Kawak
// Date 02/15/2022
// Assignment: Final Project (Task Buddy) 
// Class: CS100

#ifndef __SUBTASK_HPP
#define __SUBTASK_HPP

#include <string>

using namespace std;

class SubTask
{
    public:
        SubTask();
        ~SubTask();

        SubTask& setSubTaskName(string);
        string getSubTaskName() const;

    private:
        string name;

};

#endif //__SUBTASK_HPP
