vector<int> Solution::wave(vector<int> &A)
{
    std::sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i = i + 2)
    {
        std::swap(A[i], A[i + 1]);
    }
    return A;
}
