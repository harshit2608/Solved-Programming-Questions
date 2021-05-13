#include <iostream>

using namespace std;

int main()
{
    long int t;
    cin >> t;
    while(t--)
    {
        long int n, count = 0, rem = 0;
        cin >> n;
        while(n>0)
        {
            rem = n % 10;
            if(rem == 4)
            {
                count++;
            }
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}