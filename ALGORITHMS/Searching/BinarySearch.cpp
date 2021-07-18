#include <bits/stdc++.h>

int binarysearch(int arr[], int n, int target)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int target = 5, n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << binarysearch(arr, n, target);
    return 0;
}