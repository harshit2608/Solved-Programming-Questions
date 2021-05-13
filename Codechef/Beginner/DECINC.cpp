#include <iostream>
using namespace std;

int main() {
	int number;
	cin>>number;
	if(0<=number && number<=1000)
	 { if(number%4==0)
	    cout<<number+1;
	   else
	     cout<<number-1;
	 }
	return 0;
}
