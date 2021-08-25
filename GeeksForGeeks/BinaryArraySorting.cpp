#include <bits/stdc++.h>

using namespace std;

vector<int> SortBinaryArray(vector<int> binArray)
{
    int zero=0,sz=binArray.size();
    
    for(int i=0;i<sz;i++)
    {
        if(binArray[i]==0)
        {
            zero++;
        }
    }
    
    for(int i=0;i<zero;zero++)
    {
        binArray[i]=0;
    }
    
    for(int i=zero;i<sz;i++)
    {
        binArray[i]=1;
    }
    
    return binArray;
}

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}