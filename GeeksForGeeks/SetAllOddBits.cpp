#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,one=1,length;
	    cin>>n;
	    for(int i=1;i<=32;i++)
	    {
	        if(n & one)
	        {
	            length =i;
	        }
	        
	        one=one<<1;
	    }
	    one =1;
	    for(int j=0;j<length;j=j+2)
	    {
	        n=n|one;
	        one=one<<2;
	    }
	    cout<<n<<endl;
	}
	return 0;
}