int Solution::maxSubArray(const vector<int> &A)
{
    int maxending = A[0];
    int res = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        maxending = std::max(maxending + A[i], A[i]);
        res = std::max(maxending, res);
    }
    return res;
}