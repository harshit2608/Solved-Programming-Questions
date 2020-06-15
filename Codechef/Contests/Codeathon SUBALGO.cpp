#include <iostream>
using namespace std;
int main()
{

	long int n;
	int a;
	cin >> n >> a;

	for (int i = 1; i <= a; i++)
	{
		if (n == 0)
			break;
		if (n % 10 == 0)
			n = n / 10;
		else if (n % 10 > 0)
			n = n - 1;
	}
	cout << n << endl;

	return 0;
}