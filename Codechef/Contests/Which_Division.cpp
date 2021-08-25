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
        int a;
        cin >> a;
        if (2000 <= a)
        {
            cout << "1\n";
        }
        else if ((a >= 1600) and (a < 2000))
        {
            cout << "2\n";
        }
        else if (a < 1600)
        {
            cout << "3\n";
        }
        // int ans = 0;
        // cout << ans << "\n";
    }
    return 0;
}