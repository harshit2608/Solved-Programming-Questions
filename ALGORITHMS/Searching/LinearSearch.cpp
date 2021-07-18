#include <bits/stdc++.h>

int linearsearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 10, target = 23;
    int arr[n] = {23, 15, 89, 17, 56, 852, 753, 96521, 546, 0};
    std::cout << linearsearch(arr, n, target);
    return 0;
}