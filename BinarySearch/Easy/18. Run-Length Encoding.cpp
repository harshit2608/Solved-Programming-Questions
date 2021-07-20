string solve(string s)
{
    string res = "";
    int cnt = 1, i = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cnt = 1;
        while (i < s.length() - 1 and s[i] == s[i + 1])
        {
            i++;
            cnt++;
        }
        res += to_string(cnt);
        res += s[i];
    }
    return res;
}