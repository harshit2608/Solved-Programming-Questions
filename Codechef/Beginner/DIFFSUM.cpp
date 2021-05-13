#include <iostream>
using namespace std;

int main() {
	float n1,n2,sum,diff,val1=-1000,val2=1000;
	cin>>n1;
	cin>>n2;
	diff=n1-n2;
	sum=n1+n2;
	if(val1<=n1 && n1<=val2 && val1<=n2 && n2<=val2)
	{
    	if(n1>n2)
    	{
    	    cout<<diff;
    	}
    	else{
    	    cout<<sum;
    	}
	}	
	return 0;
}
