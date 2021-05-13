#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        int rem, reverse = 0;
        cin >> n;
        while(n!=0)    
        {
            rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
        cout << reverse << "\n";
    }
    return 0;
}