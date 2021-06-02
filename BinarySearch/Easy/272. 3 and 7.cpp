bool solve(int n)
{
    if (n == 8)
        return false;
    if (n > 11 || (n >= 6 && n <= 10) || n == 3 || n == 7)
        return true;
    return false;
}