#include <bits/stdc++.h>

#define HAR_HAR_MAHADEV int main()
#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
#define sortv(v) sort(v.begin(), v.end())
#define sorta(a, n) sort(a, a + n)
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

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    if (n % 4 != 0)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
        int q1 = n / 4, q2 = 2 * n / 4, q3 = 3 * n / 4, q4 = n;
        for (int i = 1; i <= q1; ++i)
        {
            cout << i << " ";
        }
        for (int i = q3 + 1; i <= q4; ++i)
        {
            cout << i << " ";
        }
        cout << "\n";
        for (int i = q1 + 1; i <= q3; ++i)
        {
            cout << i << " ";
        }
        cout << "\n";
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