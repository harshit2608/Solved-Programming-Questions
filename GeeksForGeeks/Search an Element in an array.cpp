#include <iostream>
#include <algorithm>

using namespace std;
#define MAX (int(1e5))
/*
int binarysearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}*/

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[MAX];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x, ans = -1;
        cin >> x;
        //int ans = binarysearch(arr, n, x);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}