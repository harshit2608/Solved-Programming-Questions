#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b,i,p;
    cin>>i;
    if(1<=i && i<=1000)
    {
    for(t=1;t<=i;t++)
        {cin>>a>>b;
        if(1<=a && a<=10000 && 1<=b && b<=10000)
        {   p=a%b;
            cout<<p<<endl;
        }
        }
    }
    return 0;
}
