#pragma once
#pragma once
#include <iostream>
#include <vector>
#include "TodoTask.h"
#include "MyDate.h"
using namespace std;

class Todo {
private:
	vector<TodoTask> Tasks;
	int TaskCount;
public:
	Todo();

	void addTask(string);
	void deleteTask(int);
	void editTask(int, string);
	void changeStatus(int, bool);

	void showAll();
	void showCompleted();
	void showUncompleted();
	void showByDate(Date);
};