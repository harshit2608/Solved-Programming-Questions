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

void solve(int arr[], int s)
{
    if (s % 2 == 0)
    {
        printf("no\n");
        return;
    }
    int i = 0, j = s - 1;
    int counter = 1;
    while (i <= j)
    {
        if (arr[i] != counter || arr[j] != counter)
        {
            printf("no\n");
            return;
        }
        else
        {
            i++;
            j--;
            counter++;
        }
    }
    printf("yes\n");
}
int main()
{
    fastIO();
    tc
    {
        int ans = 0, s;
        scanf("%d", &s);
        int arr[s];
        for (int i = 0; i < s; ++i)
        {
            scanf("%d", &arr[i]);
        }
        solve(arr, s);
    }
    return 0;
}