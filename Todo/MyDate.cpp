#include "MyDate.h"
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

Date::Date() {
    system_clock::time_point now = system_clock::now();
    time_t tt = system_clock::to_time_t(now);
    tm utc_tm = *gmtime(&tt);
    tm local_tm = *localtime(&tt);
    second = utc_tm.tm_sec;
    minute = utc_tm.tm_min;
    hour = utc_tm.tm_hour;
    day = utc_tm.tm_mday;
    month = utc_tm.tm_mon + 1;
    year = utc_tm.tm_year + 1900;
}

void Date::showTime() {
    cout << year << '-';
    cout << month + 1 << '-';
    cout << day << ' ';
    cout << hour << ':';
    cout << minute << ':';
    cout << second << '\n';
}

int Date::getDay() {
    return day;
}
int Date::getMonth() {
    return month;
}
int Date::getYear() {
    return year;
}