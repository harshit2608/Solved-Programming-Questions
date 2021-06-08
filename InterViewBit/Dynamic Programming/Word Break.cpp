unordered_map<string, bool> mp;
bool ans(string A, vector<string> &B)
{
    if (A.length() == 0)
    {
        return true;
    }
    if (mp.find(A) != mp.end())
    {
        return mp[A];
    }
    for (int i = 0; i < B.size(); i++)
    {
        if (A.substr(0, B[i].size()) == B[i] && ans(A.substr(B[i].size()), B))
        {
            return mp[A] = true;
        }
    }
    return mp[A] = false;
}

int Solution::wordBreak(string A, vector<string> &B)
{
    mp.clear();
    return ans(A, B);
}
