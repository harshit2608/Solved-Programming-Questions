#include <iostream>
using namespace std;

long long int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}

int main() {
    int i,t;
    cin>>t;
    while(t--)
    {
        cin>>i;
        cout<<fact(i)<<endl;
    }
	return 0;
}
