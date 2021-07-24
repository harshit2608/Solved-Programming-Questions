vector<int> solve(int A)
{
    vector<int> ans;
    ans.push_back(1);
    int c = 1;
    for (int i = 1; i <= A; i++)
    {
        c = c * (A - i + 1) / i;
        ans.push_back(c);
    }
    return ans;
}