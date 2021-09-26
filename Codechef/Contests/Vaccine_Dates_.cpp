#include <bits/stdc++.h>

#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    int d, l, r;
    cin >> d >> l >> r;
    if (d >= l && d <= r)
    {
        cout << "Take second dose now\n";
        return;
    }
    else if (d > r)
    {
        cout << "Too Late\n";
        return;
    }
    else if (d < l)
    {
        cout << "Too Early\n";
        return;
    }
}

int main()
{
    fastIO();
    tc
    {
        solve();
    }
    return 0;
}