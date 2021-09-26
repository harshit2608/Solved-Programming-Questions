#include <bits/stdc++.h>
using namespace std;

#define mod int(1e9 + 7)
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
        int n, sunny = 0, rainy = 0;
        for (int i = 0; i < 7; ++i)
        {
            int ele = 0;
            cin >> ele;
            if (ele == 1)
            {
                sunny++;
            }
            else
            {
                rainy++;
            }
        }
        if (sunny > rainy)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}