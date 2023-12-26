#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyDate.h"
#include "Todo.h"
#include "TodoTask.h"
using namespace std;

int main() {
	Todo mytodo;
	mytodo.addTask("Sdelat domashneye zadaniye");
	mytodo.showAll();
}