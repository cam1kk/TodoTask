#include "Todo.h"
Todo::Todo():TaskCount(Tasks.size()) {}

void Todo::addTask(string Task) {
	Tasks.push_back(Task);
	TaskCount += 1;
}
void Todo::deleteTask(int index) {
	Tasks.erase(Tasks.begin() + index);
	TaskCount -= 1;
}
void Todo::editTask(int index, string newTask) {
	Tasks[index].setTask(newTask);
}
void Todo::changeStatus(int index,bool status) {
	Tasks[index].setisCompleted(status);
}

void Todo::showAll() {
	for (int i = 0; i < TaskCount; i++)
	{
		Tasks[i].showTask();
	}
}
void Todo::showCompleted() {
	for (int i = 0; i < TaskCount; i++)
	{
		if (Tasks[i].getisCompleted())
		Tasks[i].showTask();
	}
}
void Todo::showUncompleted() {
	for (int i = 0; i < TaskCount; i++)
	{
		if (!Tasks[i].getisCompleted())
			Tasks[i].showTask();
	}
}
void Todo::showByDate(Date date) {
	for (int i = 0; i < TaskCount; i++)
	{
		if (Tasks[i].getDate().getYear() == date.getYear() &&
			Tasks[i].getDate().getMonth() == date.getMonth() &&
			Tasks[i].getDate().getDay() == date.getDay()) 
		{
			Tasks[i].showTask();
		}

	}
}