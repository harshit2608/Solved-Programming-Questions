int isPlaindrome(string S)
{
    int low = 0, high = S.size() - 1;
    while (high > low)
    {
        if (S[low++] != S[high--])
        {
            return 0;
        }
    }
    return 1;
}