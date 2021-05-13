#include <stdio.h>

int main()
{
    int testcase;
    unsigned long long int n, sum;
    scanf("%d", &testcase);
    while (testcase--)
    {
        scanf("%lld", &n);
        sum = 0;
        sum = (((n % 1000000007) * (n % 1000000007)) % 1000000007);
        printf("%lld \n", sum);
    }
}