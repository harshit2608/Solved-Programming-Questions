#include <iostream>

using namespace std;
#define MAX (int(1e5))

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, arr[MAX];
        cin >> n;
        int x;
        for (int i = 1; i <= n;i++)
        {
            cin >> x;
            //cin >> arr[i];
            arr[x] = i;
        }

        for (int i = 1; i <= n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}