#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, days = 0;
        cin >> n >> x;
        vector<ll> patient(n);
        for (int i = 0; i < n; i++)
        {
            cin >> patient[i];
        }

        sort(patient.begin(), patient.end());
        vector<ll>::iterator itr = lower_bound(patient.begin(), patient.end(), x);
        ll lowerbound = itr - patient.begin();

        for (ll i = lowerbound; i < n; i++)
        {
            if (x < patient[i])
            {
                while (x < patient[i])
                {
                    x = x * 2;
                    days++;
                }
                days++;
            }
            else
            {
                days++;
            }
            x = 2 * patient[i];
        }
zz
        ll total = lowerbound + days;
        if (lowerbound != 0)
        {
            days = 0;
            lowerbound--;
            for (int i = lowerbound; i < n; i++)
            {
                if (x < patient[i])
                {
                    while (x < patient[i])
                    {
                        x = 2 * x;
                        days++;
                    }
                    days++;
                }
                else
                {
                    days++;
                }
                x = 2 * patient[i];
            }
            if (days + lowerbound < total)
            {
                cout << days + lowerbound << endl;
            }
            else
            {
                cout << total << endl;
            }
        }
        else
        {
            cout << total << endl;
        }
    }
    return 0;
}