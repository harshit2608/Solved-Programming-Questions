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
        int n, ele, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> ele;
            if (ele % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int even1 = n / 2, odd1 = n / 2 + n % 2;
        int ans = min(even, odd1) + min(odd, even1);
        cout << ans << "\n";
    }
    return 0;
}