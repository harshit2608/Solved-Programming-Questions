bool solve(string s)
{
    int low = 0, high = s.size() - 1;
    while (high > low)
    {
        if (s[low++] != s[high--])
        {
            return false;
        }
    }

    return true;
}