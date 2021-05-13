#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test_cases, sum;
    long int n, m;
    cin>>test_cases;
    while(test_cases--)
    {
        cin >> n;
        sum = 0;
        while(n>0)
        {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
