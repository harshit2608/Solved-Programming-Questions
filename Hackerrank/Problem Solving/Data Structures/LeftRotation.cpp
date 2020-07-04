#include <iostream>

using namespace std;
#define ll long long int

int main()
{
    ll n,d;
    cin>>n>>d;
    ll arr[n],arr1[d];
    //input array
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //storing in temp
    for(ll i=0;i<d;i++)
    {
        arr1[i]=arr[i];
    }

    //shifting elements
    for(ll i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }

    //copying back
    for(ll i=0;i<d;i++)
    {
        arr[n-d+i]=arr1[i];
    }

    //displaying
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}