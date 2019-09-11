#include <iostream>

using namespace std;

int main()
{
    int num,rem,n,sum=0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    n=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"The sum of the num "<<n<<" is "<<sum<<endl;
    return 0;
}
