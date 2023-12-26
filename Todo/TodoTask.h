#pragma once
#pragma once
#include <iostream>
#include "MyDate.h"
using namespace std;

class TodoTask {
private:
	string Task;
	Date date;
	bool isCompleted;
public:
	TodoTask();
	TodoTask(string);

	bool getisCompleted();
	void setisCompleted(bool);

	string getTask();
	void setTask(string);

	void showTask();
	Date getDate();
};