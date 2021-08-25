#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    for(long long int i=13;i>-1;i--)
	    {
	        cout<<((n>>i)&1);
	    }
	    cout<<endl;
	}
	return 0;
}