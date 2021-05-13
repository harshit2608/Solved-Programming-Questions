int Solution::firstMissingPositive(vector<int> &A)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 1)
        {
            A[i] = n + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(A[i]) <= n)
        {
            A[abs(A[i]) - 1] = -abs(A[abs(A[i]) - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            return (i + 1);
        }
    }
    return (n + 1);
}