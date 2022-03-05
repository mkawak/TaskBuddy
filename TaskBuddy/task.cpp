// Majd Kawak
// Date 02/15/2022
// Assignment: Final Project (Task Buddy)
// Class: CS100

#include "task.hpp"
#include <ctime>
#include <iostream>

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
void Task::setCreationDate(Date creationDatePassed)
{
    this->creationDate = creationDatePassed;
}

void Task::setCreationTime(Time creationTimePassed)
{
    this->creationTime = creationTimePassed;
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

ostream& operator<<(ostream& output, const Task& obj)
{
    output << "Task Name:     " << obj.taskName << endl;
    output << "Note:      " << obj.taskNote << endl;
    output << "Task Creation Date and Time:    " << obj.creationDate << obj.creationTime << endl;
    output << "Task Alarm Date and Time::    " << obj.alarmDate << obj.alarmTime << endl;

    return output;
}

istream &operator>>(istream &input, Task& obj)
{
    string taskNameInput, taskNoteInput;

    cout << "\nPLease enter Task name: ";
    getline(input, taskNameInput);

    cout << "PLease enter Task note: ";
    getline(input, taskNoteInput);

    time_t now = time(0);
    tm *ltm = localtime(&now);

    Date creationDateInput(1 + ltm->tm_mon, ltm->tm_mday, 1900 + ltm->tm_year);
    obj.setCreationDate(creationDateInput);

    Time creatingTimeInput(5+ltm->tm_hour, 30+ltm->tm_min);
    obj.setCreationTime(creationTimeinput);

    Date alarmDateInput;
    cout << "PLease enter Task alarm date in the form 01/01/1990: ";
    input >> alarmDateInput;

    Time alarmTimeInput;
    cout << "PLease enter Task alarm time in the form 09:41 AM: ";
    input >> alarmTimeInput;

    obj.setTaskName(taskNameInput).setTaskNote(taskNoteInput);
    obj.setAlarmDate(alarmDateInput);
    obj.setAlarmTime(alarmTimeInput);

    return input;
}
