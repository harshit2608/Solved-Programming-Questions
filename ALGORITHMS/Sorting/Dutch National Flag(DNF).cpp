#include <bits/stdc++.h>

//INPUT:
// 2
// 5
// 1 1 2 2 0
// 0 1 2
// 10
// 9 9 5 5 6 5 9 5 6 9
// 5 6 9

void DNF(std::vector<int> &arr, int f, int s, int t)
{
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == f)
        {
            std::swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == s)
        {
            mid++;
        }
        else
        {
            std::swap(arr[mid], arr[high]);
            high--;
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
        int n, ele, f, s, th;
        std::cin >> n;
        std::vector<int> arr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> ele;
            arr[i] = ele;
        }
        std::cin >> f >> s >> th;
        DNF(arr, f, s, th);
        printArray(arr);
    }
    return 0;
}