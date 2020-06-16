#include <stdio.h>

int main()
{
    int n = 0;
    while (n != 42)
    {
        scanf("%d", &n);
        if (n != 42)
        {
            printf("%d\n", n);
        }
    }
}