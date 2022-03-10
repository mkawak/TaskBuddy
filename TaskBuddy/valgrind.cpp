#include "UserAccount.hpp"

using namespace std;

int main()
{
    UserAccount newUser;
    TaskList taskList1;
    TaskList taskList2;
    TaskList taskList3;
    Task task1;
    Task task2;
    Task task3;
    SubTask subTask1;
    SubTask subTask2;
    SubTask subTask3;

    newUser.setUserName("Allison");

    taskList1.setListName("List 1");
    taskList1.setListCategory("Category 1");

    taskList2.setListName("List 2");
    taskList2.setListCategory("Category 2");

    taskList3.setListName("List 2");
    taskList3.setListCategory("Category 2");

    task1.setTaskName("Task 1");
    task1.setTaskNote("Note 1");
    task1.setTaskDate("Day 1");

    task2.setTaskName("Task 2");
    task2.setTaskNote("Note 2");
    task2.setTaskDate("Day 2");

    task3.setTaskName("Task 3");
    task3.setTaskNote("Note 3");
    task3.setTaskDate("Day 3");

    subTask1.setSubTaskName("Sub Task 1");
    subTask2.setSubTaskName("Sub Task 2");
    subTask3.setSubTaskName("Sub Task 3");

    newUser.addTaskList(taskList1);
    newUser.addTaskList(taskList2);
    newUser.addTaskList(taskList3);

    taskList1.addTask(task1);
    taskList2.addTask(task2);
    taskList3.addTask(task3);

    task1.addSubTask(subTask1);
    task2.addSubTask(subTask2);
    task3.addSubTask(subTask3);
	
    newUser.deleteTaskList(taskList1.getListName());
    taskList2.deleteTask(task2.getTaskName());
    task3.deleteSubTask(subTask3.getSubTaskName());
    return 0;
}
