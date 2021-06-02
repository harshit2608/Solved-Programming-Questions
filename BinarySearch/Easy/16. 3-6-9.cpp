bool r(int n)
{
    while (n > 0)
    {
        if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}

vector<string> solve(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
        bool x = r(i);
        if (i % 3 == 0 || x == true)
        {
            ans.push_back("clap");
        }
        else
        {
            ans.push_back(to_string(i));
        }
    }
    return ans;
}