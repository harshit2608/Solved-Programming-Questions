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
        for (long long int i = 5; i <= num;i*=5)
        {
            count = count * (num / i);
        }
        cout << count << endl;
    }
    return 0;
}