#include<iostream>
using namespace std;

class student {
private:
	int Roll_NO;
	string name;
	int math_Marks;
	int	physics_Marks;
	int chem_Marks;
public:
	student(int r, string n, int m, int p, int c) 
	{
		Roll_NO = r;
		name = n;
		math_Marks = m;
		physics_Marks = p;
		chem_Marks = c;
	}

	int total()
	{
		return math_Marks + physics_Marks + chem_Marks;
	}

	char grade()
	{
		float average = total() / 3;
		if (average > 60)
			return 'A';
		else if (average >= 40 && average < 60)
			return 'B';
		else
			return 'C';
	}
};

int main()
{
	int roll;
	string name;
	int m, p, c;
	cout << "Enter Roll number of a Student: ";
	cin >> roll;
	cout << "Enter Name of a Student:";
	cin >> name;
	cout << "Enter marks in 3 subjects";
	cin >> m >> p >> c;
	student s(roll, name, m, p, c);
	cout << "Total Marks:" << s.total() << endl;
	cout << "Grade of Student:" << s.grade() << endl;
	return 0;
}
