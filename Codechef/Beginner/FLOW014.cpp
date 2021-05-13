#include <iostream>
using namespace std;

int main() {
	int test_cases;
	float hard,carbon,tensile;
	cin>>test_cases;
	while(test_cases--)
	{
	    cin>>hard>>carbon>>tensile;
	    if(hard>50 && carbon<0.7 && tensile>5600)
        {
            cout<<"10"<<endl;
        }
        else if(hard>50  && carbon<0.7)
        {
            cout<<"9"<<endl;
        }
        else if(carbon<0.7 && tensile>5600)
        {
            cout<<"8"<<endl;
        }
        else if(hard>50 && tensile>5600)
        {
            cout<<"7"<<endl;
        }
        else if(hard>50 || carbon<0.7 || tensile>5600)
        {
            cout<<"6"<<endl;
        }
        else if(!(hard>50) && !(carbon<0.7) && !(tensile>5600))
        {
            cout<<"5"<<endl;
        }
	}
	return 0;
}
