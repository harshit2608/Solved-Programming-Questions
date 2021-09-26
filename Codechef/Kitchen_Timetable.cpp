#include <bits/stdc++.h>

#define mod int(1e9 + 7)
#define ll long long
#define ull unsigned long long
#define MP make_pair
#define tc           \
    int t;           \
    scanf("%d", &t); \
    while (t--)
#define vci vector<int, int>
#define vcl vector<ll, ll>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(int a[], int b[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 && b[i] <= a[i])
        {
            ans++;
        }
        else if (b[i] <= a[i] - a[i - 1])
        {
            ans++;
        }
    }
    printf("%d\n", ans);
}
int main()
{
    fastIO();
    tc
    {
        int ans = 0, n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
        }
        solve(a, b, n);
    }
    return 0;
}