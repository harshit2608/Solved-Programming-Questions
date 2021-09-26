#include <bits/stdc++.h>

#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define vci vector<int>
#define vcl vector<ll>
#define umi unordered_map<int, int>
#define uml unordered_map<ll, ll>
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void solve(string &str, int n)
{
    // string ans;
    // bool flag = true;
    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] != '.')
    //     {
    //         // ans.PB(str[i]);
    //         ans += str[i];
    //     }
    // }

    // if (ans.length() % 2 != 0)
    // {
    //     // flag = false;
    //     cout << "Invalid\n";
    //     return;
    // }
    // else
    // {
    //     for (int i = 0; i < ans.length(); ++i)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             if (ans[i] == 'T')
    //             {
    //                 // flag = false;
    //                 cout << "Invalid\n";
    //                 // break;
    //                 return;
    //             }
    //         }
    //         else
    //         {
    //             if (ans[i] == 'H')
    //             {
    //                 // flag = false;
    //                 cout << "Invalid\n";
    //                 // break;
    //                 return;
    //             }
    //         }
    //     }
    // }

    // if (flag == true)
    // {
    //     cout << "Valid\n";
    // }
    // else
    // {
    //     cout << "Invalid\n";
    // }
    // cout << "Valid\n";

    int count = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'H')
        {
            if (count == 0)
            {
                count++;
            }
            else
            {
                cout << "Invalid\n";
                return;
            }
        }
        else if (str[i] == 'T')
        {
            if (count == 1)
            {
                count--;
            }
            else
            {
                cout << "Invalid\n";
                return;
            }
        }
        else
        {
            continue;
        }
    }
    if (count != 0)
    {
        cout << "Invalid\n";
        return;
    }
    cout << "Valid\n";
}

int main()
{
    fastIO();
    tc
    {
        int n;
        // scanf("%d", &n);
        cin >> n;
        string str;
        cin >> str;
        solve(str, n);
    }
    return 0;
}