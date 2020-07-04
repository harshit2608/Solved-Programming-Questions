#include <iostream>

using namespace std;

int main()
{
    long int n, m, a, b, k, max = 0,sum =0;
    cin >> n >> m;
    long int* arr = new long int[n+1]();

    for (long int i = 0; i < m; i++)
    {
        cin >> a >> b >> k;
        arr[a] = arr[a] + k;
        if((b+1)<=n)
        {
            arr[b+1]=arr[b+1]-k;
        }
    }

    for (long int i = 1; i <= n; i++)
    {
        sum =sum +arr[i];
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max << endl;
}