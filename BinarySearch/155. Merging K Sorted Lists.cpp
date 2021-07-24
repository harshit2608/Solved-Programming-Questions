vector<int> solve(vector<vector<int>> &lists)
{
    vector<int> ans;

    for (auto l : lists)
    {
        for (auto num : l)
        {
            ans.push_back(num);
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}