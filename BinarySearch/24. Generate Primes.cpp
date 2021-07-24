vector<int> solve(int n)
{
    vector<int> ans;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            ans.push_back(p);
        }
    }

    return ans;
}