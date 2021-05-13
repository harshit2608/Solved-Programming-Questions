#include "Date.h"

Date::Date()
{
	month = day = 1;
	year = 2000;
}

void Date::SetDate(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Date::PrintDate()
{
	cout << "Date format: \n";
	cout << "MM / DD / YYYY\n";
	cout << month << " / " << day << " / " << year << endl;
}

void Date::CurrentDate()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	cout << "Year: \t" << 1900 + ltm->tm_year << endl;
	cout << "Month: \t" << 1 + ltm->tm_mon << endl;
	cout << "Day: \t" << ltm->tm_mday << endl;
	cout << endl;
}

void Date::CurrentMonth()
{
	cout << "Month : " << month << endl;
}

void Date::CurrentYear()
{
	cout << "Year : " << year << endl;
}

void Date::CurrentDay()
{
	cout << "Day : " << day << endl;
}