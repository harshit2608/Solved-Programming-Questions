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
#define endl "\n"
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

// typedef vector<int> vci;
// typedef vector<ll> vcl;
// typedef unordered_map<int, int> umi;
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll sumdigit(ll n)
{
    ll ans = 0;
    while (n != 0)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    // ll diff = r - l;
    // ll ans = 0;
    // for (ll i = l; i <= r; ++i)
    // {
    //     if (sumdigit(i) % 3 == 0)
    //     {
    //         ans++;
    //     }
    // }
    if (l % 3 == 0)
    {
        cout << (r / 3) - (l / 3) + 1 << "\n";
    }
    else
    {
        cout << (r / 3) - (l / 3) << "\n";
    }
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