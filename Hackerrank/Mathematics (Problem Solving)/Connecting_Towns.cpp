#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        long long int ans = 1;
        long long int x;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            ans = (ans * x) % 1234567;
        }
        cout << ans << endl;
    }
    return 0;
}