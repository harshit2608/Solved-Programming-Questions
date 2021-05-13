#include <iostream>

using namespace std;
#define MAX (int(1e5))

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[MAX];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = 0, j = n-1, x;
        while (i <= j)
        {
            if (arr[i] <= arr[j])
            {
                j--;
            }
            else if (arr[i] >= arr[j])
            {
                i++;
            }
            x = arr[i];
        }
        cout << x << endl;
    }
    return 0;
}