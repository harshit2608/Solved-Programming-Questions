#include <stdio.h>

double ts(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = ts(x, n - 1);
        p = p * x;
        f = f * n;
        return (r + (p / f));
    }
}

int main()
{
    printf("%lf", ts(4, 15));
    return 0;
}