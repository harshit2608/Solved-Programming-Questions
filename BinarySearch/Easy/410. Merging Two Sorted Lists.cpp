vector<int> solve(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0, k = 0, n1 = a.size(), n2 = b.size();
    vector<int> ans(n1 + n2);

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            ans[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        ans[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ans[k] = b[j];
        j++;
        k++;
    }

    return ans;
}