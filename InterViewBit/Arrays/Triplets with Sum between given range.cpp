int Solution::solve(vector<string> &A)
{
    vector<double> arr;
    for (auto s : A)
        arr.push_back(stod(s));

    double a = arr[0], b = arr[1], c = arr[2];
    for (int i = 3; i < A.size(); i++)
    {
        if (a + b + c > 1 && a + b + c < 2)
        {
            return 1;
        }
        else if (a + b + c > 2)
        {
            if (a > b && a > c)
            {
                a = arr[i];
            }
            else if (b > a && b > c)
            {
                b = arr[i];
            }
            else if (c > a && c > b)
            {
                c = arr[i];
            }
        }
        else
        {
            if (a < b && a < c)
            {
                a = arr[i];
            }
            else if (b < a && b < c)
            {
                b = arr[i];
            }
            else if (c < a && c < b)
            {
                c = arr[i];
            }
        }
    }
    if (a + b + c > 1 && a + b + c < 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}