int maxar(vector<int> aux)
{
    int maxi = 0;
    for (int i = 0; i < aux.size(); i++)
    {
        int temp = aux[i] * (i + 1);
        maxi = max(maxi, temp);
    }
    return maxi;
}

int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] != 0)
            {
                A[i][j] += A[i - 1][j];
            }
        }
    }

    int ans = 0;
    vector<int> aux;
    for (int i = 0; i < n; i++)
    {
        aux = A[i];
        sort(aux.begin(), aux.end(), greater<int>());
        int tempans = maxar(aux);
        ans = max(ans, tempans);
    }
    return ans;
}