bool solve(string s0, string s1)
{
    if (s0.size() != s1.size())
    {
        return false;
    }

    int alpha[26] = {0};

    for (int i = 0; i < s1.size(); i++)
    {
        alpha[s0[i] - 'a']++;
        alpha[s1[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] != 0)
        {
            return false;
        }
    }

    return true;
}