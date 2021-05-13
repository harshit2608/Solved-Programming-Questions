#include <iostream>

using namespace std;
#define MAX (int(1e5))

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[MAX];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[j] - arr[i]) > 1)
                {
                    ans = ans + (arr[j] - arr[i]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}