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
        int n;
        string s, t;
        cin >> n >> s >> t;
        int ans = 0;
        for (size_t i = 0; i < n; i++)
        {
            if(s[i]==t[i])
            {
                ans++;
            }
            
        }
        

        cout << ans << "\n";
    }
    return 0;
}