#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1;
        cin >> n;
        int i = 1, j = 1;
        while (true)
        {
            if ((i % 3 == 0) or (i % 10 == 3))
            {
                j--;
            }
            if (j == n)
            {
                ans = i;
                break;
            }
            j++;
            i++;
        }
        cout << ans << "\n";
    }
}