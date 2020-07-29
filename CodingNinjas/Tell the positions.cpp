#include <bits/stdc++.h>

using namespace std;
#define ll long int

int main()
{
    int n;
    cin >> n;
    string s;
    int m1, m2, m3;
    multimap<ll, string, std::greater<ll>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> m1 >> m2 >> m3;
        int sum = m1 + m2 + m3;
        ans.insert(make_pair(sum, s));
    }

    int count = 1;
    for (auto &i : ans)
    {
        cout << count << " " << i.second << endl;
        count++;
    }
    return 0;
}