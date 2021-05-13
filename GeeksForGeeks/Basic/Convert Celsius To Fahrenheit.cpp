#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        float ans = (((c * 9) / 5) + 32);
        cout << ans << endl;
    }
    return 0;
}