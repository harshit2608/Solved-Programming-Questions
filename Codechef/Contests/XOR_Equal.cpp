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
        int n, a;
        cin >> n >> a;
        unordered_map<int, int> mp;
        vector<int> v;

        for (int i = 0; i < n; ++i)
        {
            int ele = 0;
            cin >> ele;
            v.push_back(ele);
            mp[ele]++;
        }

        int ans = 0, mini = 0;
        for (auto it : v)
        {
            if ((it != it ^ a) && ans < mp[it] + mp[it ^ a])
            {
                ans = mp[it] + mp[it ^ a];
                mini = mp[it ^ a];
            }
            else if ((it != it ^ a) && (ans == mp[it] + mp[it ^ a]) && (mini > mp[it ^ a]))
            {
                ans = mp[it] + mp[it ^ a];
                mini = mp[it ^ a];
            }
            else if (ans < mp[it])
            {
                ans = mp[it];
                mini = 0;
            }
        }
        cout << ans << " " << mini << "\n";
    }
    return 0;
}