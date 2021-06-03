int Solution::longestSubsequenceLength(const vector<int> &A)
{
    int n = A.size();
    vector<int> lis(n, 1);
    vector<int> lds(n, 1);

    //Calc lis
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (A[i] > A[j])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    //Calc lds
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (A[i] > A[j])
            {
                lds[i] = max(lds[i], 1 + lds[j]);
            }
        }
    }

    //Calc ans
    int ans = 0;
    for (int i = 0; i < lis.size(); i++)
    {
        ans = max(ans, lis[i] + lds[i] - 1);
    }

    for (int i = 0; i < lds.size(); i++)
    {
        cout << "i  = " << i << " " << lds[i] << endl;
    }

    // return ans;
}
