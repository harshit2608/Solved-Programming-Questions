#include <bits/stdc++.h>

using ll = long long int;

ll partition(std::vector<ll> &data, ll low, ll high)
{
    ll pivot = data[high];
    ll i = low - 1;
    for (ll j = low; j <= high - 1; ++j)
    {
        if (data[j] < pivot)
        {
            i++;
            std::swap(data[j], data[i]);
        }
    }
    std::swap(data[i + 1], data[high]);
    return (i + 1);
}

void quickSort(std::vector<ll> &data, ll low, ll high)
{
    if (high > low)
    {
        ll p = partition(data, low, high);
        quickSort(data, low, p - 1);
        quickSort(data, p + 1, high);
    }
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
        quickSort(data, 0, data.size() - 1);
        printArray(data);
    }
    return 0;
}