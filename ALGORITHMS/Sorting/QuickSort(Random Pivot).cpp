#include <bits/stdc++.h>

using ll = long long int;

ll hoarepartition(std::vector<ll> &data, ll low, ll high)
{
    ll pivot = data[low];
    ll i = low - 1, j = high + 1;
    while (true)
    {
        do
        {
            i++;
        } while (data[i] < pivot);
        do
        {
            j--;
        } while (data[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        std::swap(data[i], data[j]);
    }
}

ll partition(std::vector<ll> &data, ll low, ll high)
{
    srand(time(nullptr));
    ll random = low + rand() % (high - low);
    std::swap(data[random], data[low]);
    return hoarepartition(data, low, high);
}

void quickSort(std::vector<ll> &data, ll low, ll high)
{
    if (high > low)
    {
        ll p = partition(data, low, high);
        quickSort(data, low, p);
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