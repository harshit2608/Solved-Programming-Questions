#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

int main()
{
    fastio;
    ll t;
    cin >> t;
    t++;
    for (ll test_case = 1; test_case < t; test_case++)
    {
        ll n, res = 0, rec = 0, i;
        bool last_chk = true;
        cin >> n;
        vector<ll> visitor(n);
        for (i = 0; i < n; i++)
        {
            cin >> visitor[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            if (visitor[i] > visitor[i + 1] && visitor[i] > rec)
            {
                res++;
                rec = visitor[i];
            }
            if (last_chk && visitor[n - 1] <= visitor[i])
                last_chk = false;
        }
        if (last_chk)
        {
            res++;
        }
        cout << "Case #" << test_case << ": " << res << "\n";
    }
}