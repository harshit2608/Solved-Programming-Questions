#include <iostream>

using namespace std;

int main()
{
	long int t;
	cin >> t;
	while (t--)
	{
		long int p, h;
		cin >> h >> p;
		for (int i = 0; i < p; i = p / 2)
		{
			h = h - p;
			p = p / 2;
			if (h <= 0)
			{
				cout << "1" << endl;
				break;
			}
			else if (p <= 0)
			{
				cout << "0" << endl;
				break;
			}
		}
	}
	return 0;
}