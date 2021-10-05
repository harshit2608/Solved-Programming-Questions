#include <bits/stdc++.h>
using namespace std;

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
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define repi(i, a, b) for (ll i = b - 1; i >= a; --i)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

// typedef vector<int> vci;
// typedef vector<ll> vcl;
// typedef unordered_map<int, int> umi;
// typedef unordered_map<ll, ll> uml;

ll fastpow(ll x, ull n, ll m = mod)
{
    ll res = 1;
    x = x % m;
    if (x == 0 || x == 1)
    {
        return x;
    }
    while (n > 0)
    {
        if (n & 1)
        {
            res = (res * x) % m;
        }
        x = (x * x) % m;
        n = n >> 1;
    }
    return res;
}

void solve()
{
    int n, k, i, j;
    cin >> n >> k;
    int arr[n + 1];
    for (i = 1; i <= n && k > 0; i++, k--)
    {
        arr[i] = i;
    }
    for (j = i; j < n; j++)
    {
        arr[j] = j + 1;
    }
    if (i <= n)
    {
        arr[n] = i;
    }
    ll f = 0;
    for (j = i; j <= n; j++)
    {
        if (arr[j] == j)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "-1";
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
}

HAR_HAR_MAHADEV
{
    fastIO;
#ifndef ONLINE_JUDGE
    cerr << "HEllo";
#endif
    tc
    {
        solve();
    }
    return 0;
}