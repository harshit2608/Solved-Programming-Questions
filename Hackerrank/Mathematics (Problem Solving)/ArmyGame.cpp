#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    cout << (n + n % 2) * (m + m % 2) / 4;
}