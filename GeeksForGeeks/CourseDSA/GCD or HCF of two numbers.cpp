#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, minimum, maximum, ans = 1;
        cin >> a >> b;
        /*minimum = min(a, b);
        maximum = max(a, b);
        
            for (ll i = 1; i <= minimum; i++)
            {
                if ((a % i) == 0 && (b % i) == 0)
                {
                    ans = i;
                }
            }
        }*/
        //Optimised Solution
        ans = gcd(a, b);
        cout << ans << endl;
    }
    return 0;
}