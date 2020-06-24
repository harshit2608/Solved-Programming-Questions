#include <iostream>
#include <string>

using namespace std;

bool lapin(string s)
{
    int alpa1[26] = {0};
    int alpa2[26] = {0};
    int n = s.size();
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        alpa1[s[i]-'a']++;
        alpa2[s[j]-'a']++;
    }
    for (int i = 0; i<26; i++) 
        if (alpa1[i] != alpa2[i]) 
            return false; 
  
    return true;
}

int main()
{
    string s;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(lapin(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}