#include <bits/stdc++.h>

using ll = long long int;

void heapSort(std::vector<ll> &data, ll low, ll high)
{
}

void printArray(std::vector<ll> data)
{
    for (int i = 0; i < data.size(); ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        ll size, element;
        std::cin >> size;
        std::vector<ll> data;
        data.reserve(size);
        for (ll i = 0; i < size; i++)
        {
            std::cin >> element;
            data.emplace_back(element);
        }
        heapSort(data, 0, data.size() - 1);
        printArray(data);
    }
    return 0;
}