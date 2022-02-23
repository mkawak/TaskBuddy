// Majd Kawak
// Date 02/15/2022
// Assignment: Final Project (Task Buddy)
// Class: CS100

#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "Time.h"
#include "Date.h"
#include <string>

using namespace std;

class Task
{
    friend ostream& operator << (ostream&, const Task&);
    friend istream& operator >> (istream&, Task&);

private:

    string taskName;
    string taskNote;
    Date creationDate;
    Date alarmDate;
    Time creationTime;
    Time alarmTime;

public:

    Task(string = "N/A", string = "N/A", Date = Date(), Time = Time());
    ~Task();
    Task& setTaskName(string);
    Task& setTaskNote(string);
    void setAlarmDate(Date);
    void setAlarmTime(Time);

    string getTaskName() const;
    string getTaskNote() const;

    Date getCeationDate() const;
    Date getAlarmDate() const;

    Time getCeationTime() const;
    Time getAlarmTime() const;
};
#endif //__TASK_HPP__
