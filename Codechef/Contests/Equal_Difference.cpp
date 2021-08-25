#include <bits/stdc++.h>
#include <string>
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
        int n, maxi = 0;
        string s, t;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            maxi = max(maxi, mp[arr[i]]);
        }

        if (n <= 2)
        {
            cout << "0\n";
            continue;
        }
        if (maxi == 1)
        {
            cout << n - 2 << endl;
            continue;
        }
        cout << n - maxi << "\n";
    }
    return 0;
}