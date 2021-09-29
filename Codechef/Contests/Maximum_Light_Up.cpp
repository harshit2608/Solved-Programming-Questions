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
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
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
    ll p, a, b, c, x, y;
    cin >> p >> a >> b >> c >> x >> y;
    ll ma = (x * a) + b, mc = (y * a) + c, ans = 1;
    if (ma < mc)
    {
        ans = ma;
    }
    else
    {
        ans = mc;
    }
    cout << p / ans << "\n";
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