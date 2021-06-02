int solve(string s)
{
    int sum = 0, curr = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            curr = curr * 10 + s[i] - '0';
        }
        else
        {
            sum += curr;
            curr = 0;
        }
    }
    return sum + curr;
}