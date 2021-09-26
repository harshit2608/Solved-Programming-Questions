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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int count = 0;
    while (b > 0)
    {
        if (a > 0)
        {
            a--;
            b--;
            count++;
        }
        else if (c > 0)
        {
            c--;
            b--;
            count++;
        }
        else
        {
            b--;
        }
    }
    if (count >= n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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