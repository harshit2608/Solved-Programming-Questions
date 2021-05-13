#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n,i,p;
    cin>>i;
    if(1<=i && i<=20)
    {
    for(t=1;t<=i;t++)
        {cin>>n;
        if(1<=n && n<=10000)
        {   p=sqrt(n);
            cout<<p<<endl;
        }
        }
    }
    return 0;
}
