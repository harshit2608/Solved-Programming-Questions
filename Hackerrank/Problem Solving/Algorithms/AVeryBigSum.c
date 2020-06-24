#include <stdio.h>

int main()
{
    int n;
    long sum = 0;
    long bignn;
    scanf("%d", &n);
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%li", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + (arr[i]);
    }
    printf("%ld\n", sum);
    return 0;
}