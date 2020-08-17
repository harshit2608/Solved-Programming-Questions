#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int num, temp, rev = 0;
        cin >> num;
        temp = num;
        while(num!=0)
        {
            long long int rem = num % 10;
            rev = rem + (rev*10);
            num = num / 10;
        }

        if(rev == temp)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}