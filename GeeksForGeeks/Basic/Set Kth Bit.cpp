#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,bit;
	    cin>>n>>bit;
	    int ans = ((1<<bit)|n);
	    cout<<ans<<endl;
	}
	return 0;
}