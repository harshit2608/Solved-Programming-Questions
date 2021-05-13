#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int num, count = 0;
        cin >> num;
        while (num > 0)
        {
            num = num / 10;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}