#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        double d = ((b * b) - (4 * a * c));
        if(d<0)
        {
            cout << "Imaginary" << endl;
        }
        else if(a==0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            double ans1 = ((-b + sqrt(d)) / (2 * a));
            double ans2 = ((-b - sqrt(d)) / (2 * a));
            cout << floor(ans1) << " " << floor(ans2) << endl;
        }
    }
    return 0;
}