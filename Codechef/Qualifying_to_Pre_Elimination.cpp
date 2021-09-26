#include <bits/stdc++.h>

#define mod int(1e9 + 7)
#define ll long long
#define ull unsigned long long
#define MP make_pair
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastIO();
    tc
    {
        int ans = 0, n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int mini = arr[k - 1];
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] >= mini)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}