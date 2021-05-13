#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size();i++)
        {
            if(s1[i]<97)
            {
                s1[i]=s1[i] + 32;
            }
            if(s2[i]<97)
            {
                s2[i]=s2[i] + 32;
            }
        }
        int count = 0;
        for (int i = 0; i < s1.size();i++)
        {
            if(s1[i]==s2[i])
            {
                count++;
            }
        }

        cout << count << endl;

    }
}