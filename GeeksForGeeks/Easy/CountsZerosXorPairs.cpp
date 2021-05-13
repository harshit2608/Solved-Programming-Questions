#include<iostream>

using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    ll pair =0;
	    for(ll i=0;i<n;i++)
	    {
	        for(ll j=1+i;j<n;j++)
	        {
	            if((arr[j]^arr[i]) == 0)
	            {
	                pair++;
	            }
	        }
	    }
	    cout<<pair<<endl;
	}
	return 0;
}