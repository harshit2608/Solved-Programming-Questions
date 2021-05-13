#include <iostream>

using namespace std;
#define MAX 1000000

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n, arr[MAX];
        cin >> n;
        for (int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }

        for (int i = 0, j = n-1; i < j;i++,j--)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        for (int i = 0; i < n;i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }
    return 0;
}