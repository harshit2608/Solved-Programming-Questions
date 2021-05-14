class Solution
{
public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        if (a.length() != b.length())
        {
            return false;
        }
        int count[256];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < a.length(); i++)
        {
            count[a[i]]++;
            count[b[i]]--;
        }

        for (int i = 0; i < 256; i++)
        {
            if (count[i] > 0)
            {
                return false;
            }
        }

        return true;
    }
};