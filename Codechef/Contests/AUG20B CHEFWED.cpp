#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n], arr2[101][1001] = {0}, arr3[n][n] = {0}, ans = 1e18, tables = 100;
        map<ll, ll> container;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            container.clear();
            for (ll j = i; j < n; j++)
            {

                if (j == 0)
                {
                    arr3[i][j] = 0;
                }
                else
                {
                    arr3[i][j] = arr3[i][j - 1];
                }

                if (container.count(arr[j]) != 0)
                {
                    if (container[arr[j]] == 1)
                    {
                        arr3[i][j]++;
                    }
                    arr3[i][j]++;
                }
                container[arr[j]]++;
            }
        }

        for (int i = 0; i < n + 1; i++)
        {
            arr2[1][i] = arr3[0][i - 1];
        }

        for (int i = 2; i <= tables; i++)
        {
            arr2[i][1] = 0;
        }

        for (int i = 2; i <= tables; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                ll temp = 1e18;
                for (int p = 1; p < j; p++)
                {
                    temp = min(temp, arr2[i - 1][p] + arr3[p][j - 1]);
                }
                arr2[i][j] = temp;
            }
        }

        for (tables = 1; tables <= 100; tables++)
        {
            ans = min(((tables * k) + arr2[tables][n]), ans);
        }
        cout << ans << endl;
    }
    return 0;
}