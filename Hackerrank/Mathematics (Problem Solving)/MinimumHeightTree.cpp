#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int area, base;
    cin >> base >> area;
    cout << (int)(ceil((2 * area) / (float)base));
}