int Solution::solve(string A)
{
    stack<char> s;
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] == '(')
        {
            s.push(A[i]);
        }
        if (s.empty())
        {
            return 0;
        }
        if (A[i] == ')')
        {
            s.pop();
        }
    }
    if (s.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
