#include<iostream>
using namespace std;

float func( float x)
{
    return (1 / ( 1 + x * x ));
}

float calc(float lower, float upper, int interval )
{
    float value;
    float siz = (upper - lower)
                          / interval;
    float sum = func(lower) + func(upper);

    for (int i = 1 ; i < interval ; i++)
    {
        if (i % 3 == 0)
            sum = sum + 2 * func(lower + i * siz);
        else
            sum = sum + 3 * func(lower + i * siz);
    }
    return ( 3 *siz / 8 ) * sum ;
}

int main()
{
    int interval = 10;
    float lower;
    float upper;
    cout<<"***********SIMPHSON 3/8 RULE ***********";
    cout<<"\nThe function are 1/(1+x*x)";
    cout<<"\nEnter the upper and lower limit :";
    cin>>upper>>lower;
    float integral = calc(lower, upper,lower);

    cout << integral;
    return 0;
}
