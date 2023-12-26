#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

class Date {
private:
    int second;
    int minute;
    int hour;
    int day;
    int month;
    int year;
public:
    Date();

    void showTime();

    int getDay();
    int getMonth();
    int getYear();
};