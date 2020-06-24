#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << b;

    return 0;
}