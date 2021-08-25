#include <bits/stdc++.h>
#include <string>
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
        int n;
        cin >> n;
        int ans = 0;
        vector<string> vect;
        vect.reserve(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> vect[i];
        }
        vector<string> grey;
        vector<string> temp = [](int n)
        {
            for (int i = 0; i < (1 << n); i++)
            {
                // Generating the decimal
                // values of gray code then using
                // bitset to convert them to binary form
                int val = (i ^ (i >> 1));

                // Using bitset
                bitset<32> r(val);

                // Converting to string
                string s = r.to_string();
                grey.push_back(s.substr(32 - n));
            }
        } temp(n);
        for (int i = 0; i < grey.size(); ++i)
        {
            cout << grey[i];
        }
        cout << ans << "\n";
    }
    return 0;
}