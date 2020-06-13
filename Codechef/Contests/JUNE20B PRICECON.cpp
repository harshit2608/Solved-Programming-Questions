#include <iostream>

using namespace std;

int main()
{
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int arr[n], sum = 0, newsum = 0;
        for (int i = 0; i < n;i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        for (int i = 0; i < n;i++)
        {
            if(arr[i]>k)
            {
                arr[i] = k;
            }
            newsum = newsum + arr[i];
        }
        cout << sum - newsum << endl;
    }
    return 0;
}