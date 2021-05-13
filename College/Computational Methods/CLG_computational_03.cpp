#include <iostream>
using namespace std;
#define EPS 0.00001
double func(double x)
{
    return x*x*x-48;
}
double derive_func(double x)
{
    return 3*x*x;
}
void newton_raphson_method(double x)
 {  int iter=0;
     double h=func(x)/derive_func(x);
     while((h)>=EPS)
     {
         h=func(x)/derive_func(x);
         x=x-h;
         iter++;
         cout<<iter<<":   "<<func(x)<<"\n";

     }
     cout<<"the root of x^3-48 : "<<x;
     cout<<"\niterables"<<iter;
}
int main()
{
    double x;
    cout<<"---NEWTONS RAPHSON METHOD---\n";
    cout<<"enter the value of x: ";
    cin>>x;
    newton_raphson_method(x);
    return 0;
}
