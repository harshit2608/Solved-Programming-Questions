int Solution::canJump(vector<int> &A)
{
    int last = A.size() - 1;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] + i >= last)
        {
            last = i;
        }
    }
    return last == 0;
}
