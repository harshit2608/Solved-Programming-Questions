#include <iostream>
#include <unordered_map>

using namespace std;

int solve(int n, int p, int k)
{
    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; ++i)
    // {
    //     mp[i] = i % k;
    // }

    int ans = 0, comp = p % k;
    // for (int i = 0; i < n; ++i)
    // {
    //     mp[i] = i % k;
    //     if (mp[i] < comp)
    //     {
    //         count++;
    //     }
    //     else if (mp[i] == comp && i <= p)
    //     {
    //         count++;
    //     }
    // }
    comp--;
    int count = ((n - 1) / k) * k;
    count = n - 1 - count;
    if (comp > count)
    {
        ans += (count + 1) * ((n - 1) / k + 1) + (comp - count) * ((n - 1) / k);
    }
    else
    {
        ans += (((n - 1) / k) + 1) * (comp + 1);
    }

    for (int i = comp + 1; i <= n - 1; i = i + k)
    {
        ans++;
        if (i == p)
        {
            break;
        }
    }
    return ans;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        int ans = solve(n, p, k);
        cout << ans << endl;
    }
}