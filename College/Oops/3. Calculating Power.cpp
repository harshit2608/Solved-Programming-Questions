#include <iostream>
using namespace std;
int main()
{
    int base, exponent;
    long long result = 1;
    cout<<"Enter a base number: ";
    cin>>base;
    cout<<"Enter an exponent: ";
    cin>>exponent;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    cout<<"Answer = "<< result;
    return 0;
}
