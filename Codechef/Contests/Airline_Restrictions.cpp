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
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a + b <= d && c <= e)
        {
            cout << "YES";
        }
        else if (b + c <= d && a <= e)
        {
            cout << "YES";
        }
        else if (c + a <= d && b <= e)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}