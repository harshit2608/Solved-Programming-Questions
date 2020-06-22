#include <iostream>

#define MX (int(1e5))
int F[MX];

unsigned long long int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n - 2] = fib(n - 2);
        }
        if(F[n-1]==-1)
        {
            F[n - 1] = fib(n - 1);
        }
        
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{
    for (int i = 0; i <= MX;i++)
    {
        F[i] = -1;
    }
        std::cout << fib(40);
    return 0;
}