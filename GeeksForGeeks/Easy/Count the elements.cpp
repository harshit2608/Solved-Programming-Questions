#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n], queries = 0, index = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr2, arr2 + n);
        cin >> queries;
        for (int i = 0; i < queries; i++)
        {
            cin >> index;
            count = (upper_bound(arr2, arr2 + n, arr1[index]) - arr2);
            cout << count << endl;
        }
    }
    return 0;
}