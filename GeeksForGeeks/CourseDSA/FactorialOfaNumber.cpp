#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int num, fact = 1;
        cin >> num;
        while(num>1)
        {
            fact = fact * num;
            num--;
        }
        cout << fact << endl;
    }
    return 0;
}