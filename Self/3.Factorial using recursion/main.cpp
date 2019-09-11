#include <iostream>
#include <stdio.h>

using namespace std;

long int fact(int n);

int main()
{
    int n;
    printf("\t\t--WELCOME TO THE FACTORIAL PROGRAM --\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n,fact(n));
    return 0;
}
long int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
