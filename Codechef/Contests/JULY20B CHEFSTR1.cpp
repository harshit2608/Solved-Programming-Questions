#include <iostream>
#include <math.h>

#define MX 1000000
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,arr[MX];
        cin >> n;
        for (long int i = 0; i < n;i++)
        {
            cin >> arr[i];
        }
        long int count = 0;
        for (long int i = 0; i < n-1;i++)
        {
            /*if((abs(arr[i]-arr[i+1]))==1)
            {
                count = count + 0;
            }
            else 
            {*/
                count = count + (abs(arr[i] - arr[i + 1])) - 1;
            //}
        }

        cout << count << endl;
    }
    return 0;
}