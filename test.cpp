#include "TaskBuddy/UserAccount.hpp"
#include "gtest/gtest.h"

#include <iostream>
#include <string>

using namespace std;

TEST(UserAccountTest, TestSetAccountName)
{
    UserAccount *newAccount = new UserAccount("Person");
    newAccount->setUserName("Person2");
    EXPECT_EQ("Person2", newAccount->getUserName());
}

TEST(UserAccountTest, TestAddTaskList)
{
    UserAccount *newAccount = new UserAccount("Person");
    TaskList newTaskList;
    newTaskList.setListName("List1");
    newAccount->addTaskList(newTaskList);
    EXPECT_EQ(1, newAccount->getTaskList().size());
}

TEST(UserAccountTest, DeleteTask)
{
    UserAccount *newAccount = new UserAccount("Person");
    TaskList newTaskList;
    TaskList newTaskList1;
    newTaskList.setListName("TaskList");
    newTaskList1.setListName("TaskList1");
    newAccount->addTaskList(newTaskList);
    newAccount->addTaskList(newTaskList1);
    newAccount->deleteTaskList("TaskList");
    EXPECT_EQ(1, newAccount->getTaskList().size());
}

TEST(TaskListTest, TestSetName)
{
    std::string td = "To Do";
    std::string cat = "School";
    TaskList *newTaskList = new TaskList("To Do", "School");
    newTaskList->setListName("Done");
    EXPECT_EQ("Done", newTaskList->getListName());
}

TEST(TaskListTest, TestSetCategory)
{
    TaskList *newTaskList = new TaskList("To Do", "School");
    newTaskList->setListCategory("Work");
    EXPECT_EQ("Work", newTaskList->getListCategory());
}

TEST(TaskListTest, TestAddTask)
{
    TaskList *newTaskList = new TaskList("To Do", "School");
    Task newTask;
    newTask.setTaskName("Homework");
    newTaskList->addTask(newTask);
    EXPECT_EQ(1, newTaskList->getTasks().size());
}

TEST(TaskListTest, DeleteTask)
{
    TaskList *newTaskList = new TaskList("To Do", "School");
    Task newTask;
    Task newTask1;
    newTask.setTaskName("newTask");
    newTask1.setTaskName("newTask1");
    newTaskList->addTask(newTask);
    newTaskList->addTask(newTask1);
    newTaskList->deleteTask("newTask");
    EXPECT_EQ(1, newTaskList->getTasks().size());
}

TEST(TaskTest, TestSetName)
{
    Task *newTask = new Task("Homework", "CS Lab", "Monday");
    newTask->setTaskName("Lab");
    EXPECT_EQ("Lab", newTask->getTaskName());
}

TEST(TaskTest, TestSetNote)
{
    Task *newTask = new Task("Homework", "CS Lab", "Monday");
    newTask->setTaskNote("CS Participation");
    EXPECT_EQ("CS Participation", newTask->getTaskNote());
}

TEST(TaskTest, TestSetDate)
{
    Task *newTask = new Task("Homework", "CS Lab", "Monday");
    newTask->setTaskDate("Tuesday");
    EXPECT_EQ("Tuesday", newTask->getTaskDate());
}

TEST(TaskTest, TestAddSubTask)
{
    Task *newTask = new Task("Homework", "CS Lab", "Monday");
    SubTask newSubTask;
    newSubTask.setSubTaskName("Homework");
    newTask->addSubTask(newSubTask);
    EXPECT_EQ(1, newTask->getSubTaskList().size());
}

TEST(TaskTest, DeleteSubTask)
{
    Task *newTask = new Task("Homework", "CS Lab", "Monday");
    SubTask newSubTask;
    SubTask newSubTask1;
    newSubTask.setSubTaskName("newSubTask");
    newSubTask1.setSubTaskName("newSubTask1");
    newTask->addSubTask(newSubTask);
    newTask->addSubTask(newSubTask1);
    newTask->deleteSubTask("newSubTask");
    EXPECT_EQ(1, newTask->getSubTaskList().size());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//////////////////////////////
