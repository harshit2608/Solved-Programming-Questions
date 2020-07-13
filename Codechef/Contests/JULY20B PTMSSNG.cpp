#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll N, x, y;
        cin >> N;
        ll limit = ((4 * N) - 1);
        set<ll> x_coordinates;
        set<ll> y_coordinates;
        for (long int i = 0; i < limit; i++)
        {
            cin >> x >> y;
            auto x_pos = x_coordinates.find(x) != x_coordinates.end();
            auto y_pos = y_coordinates.find(y) != y_coordinates.end();;
            if (x_pos)
            {
                x_coordinates.erase(x);
            }
            else
            {
                x_coordinates.insert(x);
            }

            if (y_pos)
            {
                y_coordinates.erase(y);
            }
            else
            {
                y_coordinates.insert(y);
            }
        }

        for (auto it = x_coordinates.begin(); it != x_coordinates.end(); it++)
        {
            cout << *it << " ";
        }

        for (auto it = y_coordinates.begin(); it != y_coordinates.end(); it++)
        {
            cout << *it;
        }

        cout << endl;
    }
    return 0;
}