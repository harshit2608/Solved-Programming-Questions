#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,sum=0;
	    cin>>n;
	    long long int arr[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}