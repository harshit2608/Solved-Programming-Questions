#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    char ch;
    float delta,a,b,c,root1,root2;
    do{
        cout<<"\t\t----Welcome to the quadratic equation program----"<<endl;
        cout<<"Quadratic equation is ax^2 +bx +c =0"<<endl;
        cout<<"Enter the values of a ,b and c in quadratic equation "<<endl;
        cin>>a>>b>>c;
        if(a==0)
        {
            cout<<"Value of a cannot be zero "<<endl;
            cout<<"Exiting the program "<<endl;
        }
        else
        {
            delta=(b*b-(4*a*c));
            if(delta>0)
            {
                root1=(-b+sqrt(delta))/(2*a);
                root2=(b+sqrt(delta))/(2*a);
                cout<<"Roots of quadratic equation are REAL and UNEQUAL "<<endl;
                cout<<"ROOT1 = "<<root1<<" ROOT2 = "<<root2<<endl;
            }
            else if(delta==0)
            {
                root1= -b/(2*a);
                cout<<"Root are REAL and EQUAL "<<endl;
                cout<<"ROOTS are "<<root1<<" and "<<root2<<endl;
            }
            else{
                cout<<"Roots are COMPLEX and IMAGINARY "<<endl;
            }
        }
        cout<<"Do you want to continue the program (Y/N)"<<endl;
        cin>>ch;
    }while(ch=='Y' || ch=='y');
    return 0;
}
