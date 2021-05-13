#ifndef DATE_H
#define DATE_H

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	void SetDate(int month, int day, int year);
	void PrintDate();
	void CurrentDate();
	void CurrentMonth();
	void CurrentYear();
	void CurrentDay();
};
#endif