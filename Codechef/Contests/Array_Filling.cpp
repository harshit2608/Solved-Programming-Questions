#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y, ans = 0;
        cin >> n >> m;
        vector<pair<int, int>> vec;
        int arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < m; ++i)
        {
            cin >> x >> y;
            vec.push_back({x, y});
        }
        sort(vec.begin(), vec.end(), greater<pair<int, int>>());

        ll lcm = 1;
        for (int i = 1; i <= n; ++i)
        {
            ans += (n - (n / vec[i].second)) * vec[i].first;
        }
        cout << ans << "\n";
    }
    return 0;
}