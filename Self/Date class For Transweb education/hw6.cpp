#include "Date.h"

int main()
{
	int choice, month, day, year;
	std::cout << "Creating date library\n";
	Date d;
	do
	{
		cout << "Choose operations you want to perform\n";
		cout << "1. CurrentDate\n";
		cout << "2. SetDate\n";
		cout << "3. Print Date\n";
		cout << "4. Current Month\n";
		cout << "5. Current Year\n";
		cout << "6. Current Day\n";
		cout << "7. Exit\n";
		cout << endl;
		cout << "Enter the option\n";
		cin >> choice;
		switch (choice)
		{
		case 1: d.CurrentDate();
			break;
		case 2:
		A:
			cout << "Enter the month : ";
			cin >> month;
			if (month > 12 || month < 1)
			{
				cout << "Enter the valid month!!\n";
				goto A;
			}
			cout << "Enter the year : ";
			cin >> year;
		B:
			cout << "Enter the day : ";
			cin >> day;
			if (month == 2 && year % 4 == 0)
			{
				if (day < 1 || day>29)
				{
					cout << "Enter the valid days!!\n";
					goto B;
				}
			}
			else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31 || day < 1))
			{
				cout << "Enter the valid days!!\n";
				goto B;
			}
			else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30 || day < 1))
			{
				cout << "Enter the valid days!!\n";
				goto B;
			}
			d.SetDate(month, day, year);
			break;
		case 3: d.PrintDate();
			break;
		case 4: d.CurrentMonth();
			break;
		case 5: d.CurrentYear();
			break;
		case 6: d.CurrentDay();
			break;
		case 7: cout << "Exiting the program\n";
			break;
		default:
			cout << "Please enter a valid choice!!\n";
		}
	} while (choice != 7);
	return 0;
}