#include <bits/stdc++.h>

void bubblesort(std::vector<int> &arr)
{
    int n = arr.size();
    bool swapped = false;
    for (int i = 0; i < n; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
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
        bubblesort(arr);
        printArray(arr);
    }
    return 0;
}