#include <iostream>
using namespace std;

int main() {
	float area,peri,len,bre;
	cin>>len;
	cin>>bre;
	area=len*bre;
	peri=(2*(len+bre));
	if(area>peri)
	{
	    cout<<"Area"<<endl;
	    cout<<area;
	}
	else if(peri>area)
	{
	    cout<<"Peri"<<endl;
	    cout<<peri;
	}
	else if(area==peri)
	{
	    cout<<"Eq"<<endl;
	    cout<<area;
	}
	return 0;
}
