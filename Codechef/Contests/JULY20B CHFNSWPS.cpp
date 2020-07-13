#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a_container;
        vector<ll> b_container;
        ll md = ((ll)1e10);
        unordered_map<ll,ll> count;
        unordered_map<ll,ll> ans;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a_container.push_back(x);
            count[a_container[i]]++;
            md = min(md, a_container[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            ll y;
            cin >> y;
            b_container.push_back(y);
            count[b_container[i]]++;
            md = min(md, b_container[i]);
        }

        bool flag = 1;
        for (auto x : count)
        {
            if (x.second % 2)
            {
                flag = 0;
                break;
            }
            else
            {
                ans[x.first] = x.second / 2;
            }
        }
        if (!flag)
        {
            cout << "-1" << endl;
            continue;
        }
        unordered_map<ll,ll> final = ans;
        vector<ll> v, v1;
        for (ll i = 0; i < n; i++)
        {
            if (final[a_container[i]])
            {
                final[a_container[i]]--;
            }
            else
            {
                v.push_back(a_container[i]);
            }
        }
        final = ans;
        for (ll i = 0; i < n; i++)
        {
            if (final[b_container[i]])
            {
                final[b_container[i]]--;
            }
            else
            {
                v1.push_back(b_container[i]);
            }
        }
        if (v.size() == 0)
        {
            cout << "0" << endl;
            continue;
        }
        ll put = 0;
        sort(v.begin(), v.end());
        sort(v1.rbegin(), v1.rend());
        for (ll i = 0; i < v.size(); i++)
        {
            put += min(2 * md, min(v[i], v1[i]));
        }
        cout << put << endl;
    }
    return 0;
}