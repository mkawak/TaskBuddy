// Majd Kawak
// Date 02/10/2022
// Assignment: Final Project (Task Buddy)
// Class: CS100

#include "subtask.hpp"
#include <ctime>
#include <iostream>

using namespace std;

SubTask::SubTask(string taskNamePassed, string taskNotePassed, Date alarmDatePassed, Time alarmTimePassed):
Task(taskNamePassed, taskNotePassed, alarmDatePassed, alarmTimePassed)
{

}

SubTask::~SubTask()
{

}

ostream& operator<<(ostream& output, const SubTask& obj)
{
    output << "SubTask Name:     " << obj.taskName << endl;
    output << "SubNote:      " << obj.taskNote << endl;
    output << "SubTask Creation Date and Time:    " << obj.creationDate << obj.creationTime << endl;
    output << "SubTask Alarm Date and Time::    " << obj.alarmDate << obj.alarmTime << endl;

    return output;
}

istream &operator>>(istream &input, SubTask &obj)
{
    string subTaskNameInput, subTaskNoteInput;

    cout << "\nPLease enter SubTask name: ";
    getline(input, subTaskNameInput);

    cout << "PLease enter SubTask note: ";
    getline(input, subTaskNoteInput);

    time_t now = time(0);
    tm *ltm = localtime(&now);

    Date creationDateInput(1 + ltm->tm_mon, ltm->tm_mday, 1900 + ltm->tm_year);
    obj.setCreationDate(creationDateInput);

    Time creatingTimeInput(5+ltm->tm_hour, 30+ltm->tm_min);
    obj.setCreationTime(creationTimeinput);

    Date alarmDateInput;
    cout << "PLease enter SubTask alarm date in the form 01/01/1990: ";
    input >> alarmDateInput;

    Time alarmTimeInput;
    cout << "PLease enter SubTask alarm time in the form 09:41 AM: ";
    input >> alarmTimeInput;

    obj.setTaskName(subTaskNameInput).setTaskNote(subTaskNoteInput);
    obj.setAlarmDate(alarmDateInput);
    obj.setAlarmTime(alarmTimeInput);

    return input;
}
