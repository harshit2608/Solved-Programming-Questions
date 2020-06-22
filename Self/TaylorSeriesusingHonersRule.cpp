#include <iostream>

double ts(int x, int n)
{
    static double r;
    if (n == 0)
    {
        return r;
    }
    else
    {
        r = 1 + static_cast<double>(x) / static_cast<double>(n) * r;
    }
    return ts(x, n - 1);
}

int main()
{
    printf("%lf", ts(2, 10));
    return 0;
}