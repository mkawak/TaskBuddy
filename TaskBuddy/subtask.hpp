// Majd Kawak
// Date 02/15/2022
// Assignment: Final Project (Task Buddy) 
// Class: CS100

#ifndef __SUBTASK_HPP
#define __SUBTASK_HPP

#include "task.hpp"

using namespace std;

class SubTask : public Task
{
    friend ostream& operator<<(ostream&, const SubTask&);
    friend istream& operator >> (istream&, SubTask&);

    public:
        SubTask(string = "N/A", string = "N/A", Date = Date(), Time = Time());
    

};

#endif //__SUBTASK_HPP
