#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, ans;
        const int MAX_CHAR = 26;
        int arr1[MAX_CHAR] = {0}, arr2[MAX_CHAR] = {0};
        cin >> a >> b;
        for (int i = 0; i < a.length(); i++)
        {
            arr1[a[i] - 'a']++;
        }

        for (int i = 0; i < b.length(); i++)
        {
            arr1[b[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            arr2[i] = arr1[i];
        }

        for (int i = 0; i <= (b[0] - 'a'); i++)
        {
            while (arr1[i] > 0)
            {
                ans += (char)(i + 97);
                arr1[i]--;
            }
        }

        ans += b;
        for (int i = 0; i < 26; i++)
        {
            while (arr1[i] > 0)
            {
                ans += (char)(i + 97);
                arr1[i]--;
            }
        }

        string sf;
        for (int i = 0; i < b[0] - 'a'; i++)
        {
            while (arr2[i] != 0)
            {
                sf += (char)(i + 97);
                arr2[i]--;
            }
        }
        sf += b;
        for (int i = 0; i < 26; i++)
        {
            while (arr2[i] != 0)
            {
                sf += (char)(i + 97);
                arr2[i]--;
            }
        }
        cout << min(ans, sf) << "\n";
    }
    return 0;
}