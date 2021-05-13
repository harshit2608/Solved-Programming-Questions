#include <iostream>

using namespace std;

int print1ton(int n, int k = 1)
{
    if (n == 0)
    {
        cout << endl;
        return 0;
    }
    cout << k << " ";
    print1ton(n - 1, k + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print1ton(n);
    }
}