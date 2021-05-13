#include <iostream>
using namespace std;

int main() {
	int sum=0,last,first,t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    last=n%10;
	    do{
	        first=n;
	        n=n/10;
	    }while(n>0);
	    sum=last+first;
	    cout<<sum<<endl;
	}
	return 0;
}
