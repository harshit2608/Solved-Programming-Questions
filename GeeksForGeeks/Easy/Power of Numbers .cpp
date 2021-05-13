#include <iostream>

using namespace std;

#define lli unsigned long long int
#define MX 1000000007

lli reverse(lli n)
{
	lli rem, rev = 0;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	return rev;
}

lli power(lli n, lli r)
{
	if (r == 0)
	{
		return 1;
	}
	lli temp = power(n, (r / 2));
	if (r % 2 == 0)
	{
		return (temp % MX) * (temp % MX) % MX;
	}
	else
	{
		return ((((temp % MX) * (temp % MX)) % MX) * (n % MX)) % MX;
	}
}

int main()
{
	lli t;
	cin >> t;
	while (t--)
	{
		lli n, r;
		cin >> n;
		r = reverse(n);
		cout << (power(n, r)) << endl;
	}
	return 0;
}