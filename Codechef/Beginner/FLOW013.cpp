#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;int a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    
	    if(a+b+c==180)
	    {
	        printf("YES");
	        printf("\n");
	    }
	    else
	    {
	        printf("NO");
	        printf("\n");
	    }
	}
	
	
	
	return 0;
}
