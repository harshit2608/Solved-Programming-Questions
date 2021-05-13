#include <iostream>
using namespace std;

int main() {
	int test_cases;
	char ch;
	cin>>test_cases;
	while(test_cases--)
	{
	    cin>>ch;
	    if(ch=='B' || ch=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(ch=='C' || ch=='c')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else if(ch=='D' || ch=='d')
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    else if(ch=='F' || ch=='f')
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
