#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        for (int c = 1; c <= n; ++c) //c
        {
            for (int b = c; b <= n; b = b + c) //b
            {
                if (b % c == 0)
                {
                    for (int a = c; a <= n; a = a + b) //a
                    {
                        if (a % b == c)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}