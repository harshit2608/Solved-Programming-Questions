#include <bits/stdc++.h>
using namespace std;
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

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, q, ans = 1;
        cin >> n >> m >> q;
        // unordered_map<int, int> mp;
        // for (int i = 1; i <= q; ++i)
        // {
        //     mp[i] = -1;
        // }
        unordered_set<int> st;
        // for (int i = 1; i <= q; ++i)
        // {
        //     cin >> ele;
        // if (mp[abs(ele)] == -1 and ele > 0)
        // {
        //     mp[abs(ele)] = 1;
        //     cap++;
        //     if (cap > m)
        //     {
        //         ans = 0;
        //         break;
        //     }
        // }
        // else if (mp[abs(ele)] == -1 and ele < 0)
        // {
        //     ans = 0;
        //     break;
        // }
        // else if (ele < 0)
        // {
        //     mp[abs(ele)] = -1;
        //     cap--;
        // }

        // if (ele < 0 and vec.find(abs(ele)) != vec.end())
        // {
        //     cap += ele;
        //     if (cap > m)
        //     {
        //         ans = 0;
        //         break;
        //     } //Inc
        //     vec.erase()
        // }
        // else if (ele > 0)
        // {
        //     cap += ele;
        //     if (cap > m)
        //     {
        //         ans = 0;
        //         break;
        //     }
        //     vec.push_back(ele);
        // }
        // else if (ele < 0 and)
        // {
        // }
        // }

        while (q--)
        {
            char ch;
            int i;
            cin >> ch >> i;
            if (ans == 1)
            {
                if (ch == '-')
                {
                    if (st.find(i) != st.end())
                    {
                        st.erase(i);
                    }
                    else
                    {
                        ans = 0;
                    }
                }
                else
                {
                    if ((int)st.size() == m)
                    {
                        ans = 0;
                    }
                    else
                    {
                        st.insert(i);
                    }
                }
            }
            // else
            // {
            //     break;// cause next input will not be the q but the value of last q in some testcases
            // }
        }

        if (ans == 0)
        {
            cout << "Inconsistent\n";
        }
        else
        {
            cout << "Consistent\n";
        }
    }
    return 0;
}