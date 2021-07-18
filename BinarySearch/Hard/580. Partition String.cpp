vector<int> solve(string s)
{
    vector<int> ans;
    int n = s.size();
    int last[26];
    for (int i = 0; i < n; ++i)
    {
        last[s[i] - 'a'] = i;
    }

    int i = 0;
    while (i < n)
    {
        int k = last[s[i] - 'a'];
        int j = i + 1;
        while (j <= k)
        {
            k = max(k, last[s[j] - 'a']);
            j += 1;
        }
        ans.push_back(j - i);
        i = j;
    }
    return ans;
}