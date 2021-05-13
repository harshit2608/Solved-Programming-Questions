#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else if(b>a)
            b=b-a;
    }
    return b;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<" "<<a*b/gcd(a,b)<<endl;
	}
	return 0;
}
