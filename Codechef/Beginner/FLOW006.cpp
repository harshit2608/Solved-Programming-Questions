#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    
    TO DO
    
    */
    int test_cases, sum = 0;
    unsigned long int N = 0;
    cin>>test_cases;
    while(test_cases--)
    {
        cin >> N;
        for (int i = 0; i<=to_string(N).length();i++)
        {
            sum = sum + N;
        }
        cout << sum;
    }
    return 0;
}
