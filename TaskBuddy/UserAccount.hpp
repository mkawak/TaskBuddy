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
        void addTaskList(TaskList t);
        void deleteTaskList(int);
        vector<TaskList> list;
        protected:

        private:

        std::string userName;


};

#endif

