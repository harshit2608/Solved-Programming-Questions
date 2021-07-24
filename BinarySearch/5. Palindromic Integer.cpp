bool solve(int num)
{
    int temp = num, rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return rev == num;
}