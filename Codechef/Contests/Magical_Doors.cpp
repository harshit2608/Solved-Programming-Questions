#include <bits/stdc++.h>

#define HAR_HAR_MAHADEV int main()
#define PI 3.1415926535897932384626
#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

// typedef vector<int> vci;
// typedef vector<ll> vcl;
// typedef unordered_map<int, int> umi;
// typedef unordered_map<ll, ll> uml;

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    string str;
    ll ans = 0;
    cin >> str;
    int sz = str.size();
    char c = '1';
    for (int i = 0; i < sz; ++i)
    {
        if (str[i] != c)
        {
            ans++;
            // for (int j = i; j < str.size(); ++j)
            // {
            //     if (str[j] == '0')
            //     {
            //         str[j] = '1';
            //     }
            //     else
            //     {
            //         str[j] = '0';
            //     }
            // }
            c = str[i];
        }
    }
    cout << ans << "\n";
}

HAR_HAR_MAHADEV
{
    fastIO();
    tc
    {
        solve();
    }
    return 0;
}