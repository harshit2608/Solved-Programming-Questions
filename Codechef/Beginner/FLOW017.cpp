#include <iostream>

using namespace std;

int main()
{
    long long int test__cases,a,b,c,seclar;
    cin>>test__cases;
    while(test__cases--)
    {
        cin>>a>>b>>c;
        if((a>b && a<c ) || (a>c && a<b))
           cout<<a<<endl;
           else if((b>a && b<c) || (b<a && b>c))
            cout<<b<<endl;
           else
            cout<<c<<endl;
    }
    return 0;
}
