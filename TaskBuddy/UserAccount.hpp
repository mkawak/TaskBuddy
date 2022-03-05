#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include "TaskList.hpp"

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class UserAccount{
public:
        UserAccount();
        UserAccount(std::string nam);
        void setUserName(std::string n);
        std::string getUserName();

        protected:

        private:
        vector<TaskList> list;
        std::string userName;
        int counter;
        int accCounter();
        void countUp();
        void addTaskList(TaskList t);
        void coundDown();
        void deleteTaskList(TaskList t);
        void displayTaskLists();
};

#endif

