#include <iostream>

using namespace std;

#define MX ((int)1e5)
int main()
{
    int size,arr[MX];
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}