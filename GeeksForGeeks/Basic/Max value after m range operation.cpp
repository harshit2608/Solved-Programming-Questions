#include <iostream>

using namespace std;
#define MAX (int(1e5))

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b, k;
        cin >> n >> m;
        int arr[MAX]{0};
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> k;
            for (int j = a; j <= b; j++)
            {
                arr[j] = arr[j] + k;
            }
        }

        int max = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}