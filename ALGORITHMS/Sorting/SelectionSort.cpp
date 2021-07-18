#include <bits/stdc++.h>

void selectionsort(std::vector<int> &arr)
{
    int min = 0;
    for (int i = 0; i < arr.size() - 1; ++i)
    {
        min = i;
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        std::swap(arr[min], arr[i]);
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
        selectionsort(arr);
        printArray(arr);
    }
    return 0;
}