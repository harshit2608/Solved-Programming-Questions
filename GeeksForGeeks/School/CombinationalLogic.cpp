#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    int ans = (((~a)&b)||(c&d)||(e&(~f)));
	    cout<<ans<<endl;
	}
	
	return 0;
}