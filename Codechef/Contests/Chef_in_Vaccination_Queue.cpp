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
    int n, p, x, y;
    cin >> n >> p >> x >> y;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < p; ++i)
    {
        if (arr[i] == 1)
        {
            ans += y;
        }
        else if (arr[i] == 0)
        {
            ans += x;
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