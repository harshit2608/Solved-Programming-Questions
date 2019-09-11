#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    int x,y,z;
    char ch;
    cout << "\t--WELCOME TO THE CALCULATOR PROGRAM--" << endl;
    cout<<"Enter the operation (+ - * /) you want to perform \n";
    cin>>ch;
    cout<<"Enter the two numbers for operation \n";
    cin>>a;
    cin>>b;
    if(ch=='+')
    {   c=a+b;
        printf("\n The sum of the two digit is ");
        cout<<c;
    }
    if(ch=='-')
    {   c=a-b;
        printf("\n The difference of the two digit is ");
               cout<<c;
    }
    if(ch=='*')
    {   c=a*b;
        printf("\n The product of the two digit is ");
               cout<<c;
    }
    if(ch=='/')
    {   c=a/b;
        printf("\n The division of the two digit is ");
               cout<<c;
    }
    return 0;
}
