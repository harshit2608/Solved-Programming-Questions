#include <iostream>

using namespace std;
#define MAX 10001

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, X = 0;
        cin >> n >> k;
        int arr[MAX]{0}, arr2[MAX]{0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[arr[i]]++;
        }

        for (int i = 0; i < MAX;i++)
        {
            if(arr2[i]==1)
            {
                X = i;
            }
        }
        cout << X << endl;
    }
    return 0;
}