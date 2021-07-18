#include <bits/stdc++.h>

void insertionsort(std::vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, ele;
        std::cin >> n;
        std::vector<int> arr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> ele;
            arr[i] = ele;
        }
        insertionsort(arr);
        printArray(arr);
    }
    return 0;
}