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
        int n, a, b;
        string str;
        cin >> n >> a >> b;
        cin >> str;
        int arr[2] = {0};
        for (int i = 0; i < n; ++i)
        {
            // arr[int(str[i])]++;
            if (str[i] == '0')
            {
                arr[0]++;
            }
            else
            {
                arr[1]++;
            }
        }
        int ans = (arr[0] * a) + (arr[1] * b);
        cout << ans << "\n";
    }
    return 0;
}