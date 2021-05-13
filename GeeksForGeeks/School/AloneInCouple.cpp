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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = res ^ arr[i];
        }
        cout << res << endl;
    }
    return 0;
}