#include<iostream>

using namespace std;

class Weight_rollno
{
private:
	float kilograms;
	float grams;
public:
	Weight_rollno()
	{
		kilograms = 0.0;
		grams = 0.0;
	}

	Weight_rollno(float kg, float gm)
	{
		kilograms = kg;
		grams = gm;
	}

	void input()
	{
		cout << "Enter the weight in Kg"<<endl;
		cin >> kilograms;
		cout << "Enter the weight in gm"<<endl;
		cin >> grams;
	}

	void Display()
	{
		while (grams >= 1000)
		{
			kilograms++;
			grams = grams - 1000;
		}

		cout << "\nThe Weight is "<<kilograms <<"Kg"<<grams <<"G" << endl;
	}

	Weight_rollno operator-(Weight_rollno const& obj)
	{
		Weight_rollno result;
		result.kilograms = kilograms - obj.kilograms;
		result.grams = grams - obj.grams;
		return result;
	}
};

int main()
{
	Weight_rollno W1, W2, W3;
	W1.input();
	W1.Display();
	W2.input();
	W2.Display();
	W3 = W1 - W2;
	cout << "\n The resulted weight is " << endl;
	W3.Display();
	cin.get();
}