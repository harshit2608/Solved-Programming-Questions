#include <iostream>

using namespace std;

int main()
{
    int t, hs;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> hs;
        if (hs <= 1)
        {
            sum = 0;
            cout << sum << endl;
        }
        else
        {
            for (int i = 1; i < hs; i++)
            {
                sum = sum + i;
            }
            cout << sum << endl;
        }
    }
}