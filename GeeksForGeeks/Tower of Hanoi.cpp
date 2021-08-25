#include <iostream>
#include <math.h>

using namespace std;

int toh(int n, int a = 1, int b = 2, int c = 3)
{
    if(n>0)
    {
        toh(n - 1, a, c, b);
        cout << "move disk " << n << " from rod " << a << " to rod " << c << endl;
        toh(n - 1, b, a, c);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        toh(n);
        cout << (pow(2,n) - 1) << endl;
    }
    return 0;
}