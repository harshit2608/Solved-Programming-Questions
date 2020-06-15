#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long int t,quantity;
	cin>>t;
	while(t--)
	{
	    double price,total=0,expense=0;
	    cin>>quantity>>price;
	    total=quantity*price;
	    if(quantity>1000)
	    {
	     expense=(total-((total*10)/100));
	     cout << std::setprecision(6)<< std::fixed<<expense<<endl;
	    }
	    else{
	        cout << std::setprecision(6)<< std::fixed<<total<<endl;
	    }
	}
	return 0;
}
