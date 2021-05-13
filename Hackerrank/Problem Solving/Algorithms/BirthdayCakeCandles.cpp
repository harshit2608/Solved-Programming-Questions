#include <bits/stdc++.h>

using namespace std;
#define MX ((int)1e5)


int main()
{
    int n,arr[MX];
    int largest = 0,count = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==largest)
        {
            count++;
        }
    }
    cout<<count;

}