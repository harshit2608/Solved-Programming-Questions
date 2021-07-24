int solve(int num)
{
    int ans = 0;
    while (num > 0)
    {
        ans = ans + (num % 10);
        num = num / 10;
    }
    return ans;
}