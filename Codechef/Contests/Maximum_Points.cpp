#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define mod int(1e9 + 7)
#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool isPerfectSquare(ll n)
{
    if ((sqrt(n) - floor(sqrt(n))) != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int countdigit(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n = n / 10;
        ans++;
    }
    return ans;
}

int solve(int d, int e, int f, int m, int n, int o)
{
    int ans = 0, j = 0, k = 0, l = 0, solved = 0, tr = 240;
    // for (int i = 1; i <= 20; ++i)
    // {
    //     if (d * i > 240)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }
    // int tr = 240 - d * j;
    // ans = m * j;
    solved = tr / d;
    if (solved >= 20)
    {
        ans += m * 20;
        tr = tr - (20 * d);
    }
    else
    {
        ans += m * solved;
        tr = tr - solved * d;
    }
    // for (int i = 1; i <= 20; ++i)
    // {
    //     if (e * i > tr)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         k++;
    //     }
    // }
    solved = tr / e;
    if (solved >= 20)
    {
        ans += n * 20;
        tr = tr - (20 * e);
    }
    else
    {
        ans += n * solved;
        tr = tr - solved * e;
    }
    // ans += n * k;
    // tr = tr - e * k;
    // for (int i = 1; i <= 20; ++i)
    // {
    //     if (f * i > tr)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         l++;
    //     }
    // }
    solved = tr / f;
    if (solved >= 20)
    {
        ans += o * 20;
        tr = tr - (20 * f);
    }
    else
    {
        ans += o * solved;
        tr = tr - solved * f;
    }
    return ans;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y, z;
        cin >> a >> b >> c;
        cin >> x >> y >> z;
        // vector<int> ans;
        // ans.push_back(solve(a, b, c, x, y, z));
        // ans.push_back(solve(a, c, b, x, z, y));
        // ans.push_back(solve(b, a, c, y, x, z));
        // ans.push_back(solve(b, c, a, y, z, x));
        // ans.push_back(solve(c, b, a, z, y, x));
        // ans.push_back(solve(c, a, b, z, x, y));
        // cout << *max_element(ans.begin(), ans.end()) << endl;
        vector<pair<int, int>> ans = {{x, a}, {y, b}, {z, c}};

        sort(ans.rbegin(), ans.rend());
        int tr = 240, sc = 0;
        sc += ans[0].first * 20;
        tr -= ans[0].second * 20;
        while (tr > 0)
        {
            for (int i = 0; i < 20; i++)
            {
                if (tr <= 0)
                {
                    break;
                }
                sc += ans[1].first;
                tr -= ans[1].second;
            }
            for (int i = 0; i < 20; i++)
            {
                if (tr <= 0)
                {
                    break;
                }
                sc += ans[2].first;
                tr -= ans[2].second;
            }
        }
        cout << sc + tr << endl;
    }
    return 0;
}