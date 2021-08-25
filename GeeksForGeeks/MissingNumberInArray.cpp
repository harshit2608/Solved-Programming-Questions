#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,sum1 =0,sum2;
	    cin>>n;
	    long int arr[n];
	    sum2 = ((n*(n+1))/2);
	    for(long int i=0;i<n-1;i++)
	    {
	        cin>>arr[i];
	        sum1 = sum1 + arr[i];
	    }
	   
	    cout<<(sum2-sum1)<<endl;
	}
	return 0;
}