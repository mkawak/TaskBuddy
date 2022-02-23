// Majd Kawak
// // Date 02/15/2022
// // Assignment: Final Project (Task Buddy)
// // Class: CS100

#include "task.hpp"

using namespace std;

Task::Task(string taskNamePassed, string taskNotePassed, Date alarmDatePassed, Time alarmTimePassed):
taskName(taskNamePassed), taskNote(taskNotePassed), alarmDate(alarmDatePassed), alarmTime(alarmTimePassed)
{
}

Task ::~Task()
{
}

Task& Task::setTaskName(string taskNamePassed)
{
    this->taskName = taskNamePassed;
    return *this;
}

Task& Task::setTaskNote(string taskNotePassed)
{
    this->taskNote = taskNotePassed;
    return *this;
}

void Task::setAlarmDate(Date alarmDatePassed)
{
    this->alarmDate = alarmDatePassed;
}

void Task::setAlarmTime(Time alarmTimePassed)
{
    this->alarmTime = alarmTimePassed;
}

string Task::getTaskName() const
{
    return this->taskName;
}

string Task::getTaskNote() const
{
    return this->taskNote;
}

Date Task::getCeationDate() const
{
    return this->creationDate;
}

Date Task::getAlarmDate() const
{
    return this->alarmDate;
}

Time Task::getCeationTime() const
{
    return this->creationTime;
}

Time Task::getAlarmTime() const
{
    return this->alarmTime;
}

ostream& operator<<(ostream& output, const Course& obj)
{
    output << "Task Name:     " << obj.taskName << endl;
    output << "Note:      " << obj.taskNote << endl;
    output << "Task Creation Date and Time:    " << obj.creationDate << obj.creationTime << endl;
    output << "Task Alarm Date and Time::    " << obj.alarmDate << obj.alarmTime << endl;

    return output;
}

istream &operator>>(istream &input, Course &obj)
{
    

    return input;
}
