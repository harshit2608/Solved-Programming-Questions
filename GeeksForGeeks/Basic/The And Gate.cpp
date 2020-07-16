#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=1 ;i<=n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count =0;
	    for(int i=1;i<=n;i++)
	    {
	        if((arr[i]&1)==1)
	        {
	            count++;
	        }
	    }
	    
	    if(count == n)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}