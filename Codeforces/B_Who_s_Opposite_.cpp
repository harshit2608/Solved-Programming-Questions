#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool isPerfectSquare(ll n)
{
    if ((sqrt(n) - floor(sqrt(n))) != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int n = 2 * (abs(a - b));
        if (c > n or b > n or a > n)
        {
            cout << "-1\n";
            continue;
        }

        int i = 1, j = (n / 2) + 1;
        if (c > j)
        {
            cout << (c - j) + 1 << "\n";
        }
        else if (c < j)
        {
            cout << j + (c - i) << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}