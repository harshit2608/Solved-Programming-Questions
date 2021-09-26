#include <bits/stdc++.h>
using namespace std;

#define mod int(1e9 + 7)
#define ll long long int

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool isPerfectSquare(ll n)
{
    if ((sqrt(n) - floor(sqrt(n))) != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int countdigit(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n = n / 10;
        ans++;
    }
    return ans;
}

// int solve(int n)
// {
//     int largest = pow(10, n) - 1, ans = 0;
//     int smallest = pow(10, n - 1);
//     for (int i = smallest; i <= largest; ++i)
//     {
//         if (i % 2 != 0)
//         {
//             if ((i % 3 == 0) && (i % 9 != 0))
//             {
//                 ans = i;
//                 break;
//             }
//         }
//     }
//     return ans;
// }
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 1;
        cin >> n;
        if (n == 1)
        {
            cout << "3\n";
        }
        else if (n == 2)
        {
            cout << "33\n";
        }
        else
        {
            string str = "";
            for (int i = 0; i < n - 2; ++i)
            {
                // str.push_back("0");
                str += "0";
            }
            string ans = "3" + str + "3";
            cout << ans << endl;
        }
    }
    return 0;
}