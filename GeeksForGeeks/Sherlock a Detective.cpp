#include <iostream>

using namespace std;

#define MAX (int(1e5))

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[MAX], n, arr2[MAX]{0}, i = 0;
        cin >> n;
        while (i < n)
        {
            cin >> arr[i];
            arr2[arr[i]]++;
            i++;
        }

        for (int i = 1; i <= n; i++)
        {
            if(arr2[i]==0 && arr2[i]<=n)
            {

                cout << i << " ";
            }
        }

        cout << endl;

    }
}