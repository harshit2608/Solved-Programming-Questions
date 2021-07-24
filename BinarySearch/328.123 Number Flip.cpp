int reversenum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    return rev;
}

int maxnumber(int n)
{
    int count = 0, rem = 0, res = 0, d = 1;
    while (n > 0)
    {
        rem = n % 10;
        if (rem < 3 && count == 0)
        {
            count++;
            res = res + (3 * d);
        }
        else
        {
            res = res + rem * d;
        }
        d = d * 10;
        n = n / 10;
    }
    return res;
}

int solve(int n)
{
    int ans = reversenum(n);
    int rep = maxnumber(ans);
    return reversenum(rep);
}