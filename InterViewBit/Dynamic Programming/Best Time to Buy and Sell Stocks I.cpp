int Solution::maxProfit(const vector<int> &A)
{
    int mini = INT_MAX;
    int maxi = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < mini)
        {
            mini = A[i];
        }
        else
        {
            maxi = max(maxi, A[i] - mini);
        }
    }
    return maxi;
}