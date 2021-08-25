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
        int n, a;
        cin >> n >> a;
        int ans = 0;
        while (true)
        {
            if (isPerfectSquare(n))
            {
                break;
            }
            else
            {
                n--;
            }
        }
        int num = sqrt(n);
        ans = num * a;
        cout << ans << "\n";
    }
    return 0;
}