#include <iostream>

using namespace std;
#define Max 100000001

int main()
{
    long int t, n, arr[Max]={0};
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        arr[n]++;
    }

    for (long int i = 0; i < Max; i++)
    {
        while (arr[i]--)
        {
            cout << i << endl;
        }
    }
}