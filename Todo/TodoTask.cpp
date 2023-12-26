#include "TodoTask.h"
TodoTask::TodoTask() :
	Task("EmptyTask"), isCompleted(false)
{}
TodoTask::TodoTask(string Task) :
	Task(Task), isCompleted(false)
{}

bool TodoTask::getisCompleted() {
	return isCompleted;
}
void TodoTask::setisCompleted(bool complt) {
	isCompleted = complt;
}

string TodoTask::getTask() {
	return Task;
}
void TodoTask::setTask(string newTask) {
	Task = newTask;
}

void TodoTask::showTask() {
	cout << "Task: " << endl;
	cout << Task << endl;
	cout << "Date: " << endl;
	date.showTime();
	cout << "IsCompleted: " << endl;
	if (isCompleted)
		cout << '' << endl;
	else
		cout << char(215) << endl;
}

Date TodoTask::getDate() {
	return date;
}