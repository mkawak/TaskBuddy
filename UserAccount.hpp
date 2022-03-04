#ifndef USERACCOUNT_H
#define USERACCOUNT_H

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
        int counter();
        void countUp();
        void addTaskList();
        void coundDown();
        void deleteTaskList(TaskList t);
        void displayTaskLists();
        protected:

        private:
        vector<TaskList> list;
        std::string userName;
        int counter;

};

#endif

