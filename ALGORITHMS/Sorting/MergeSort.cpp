#include <bits/stdc++.h>

using ll = long long int;

void merge(std::vector<ll> &data, ll low, ll mid, ll high)
{
    ll leftSize = mid - low + 1, rightSize = high - mid;
    std::vector<ll> left(leftSize);
    std::vector<ll> right(rightSize);

    for (ll i = 0; i < leftSize; i++)
    {
        left[i] = data[i + low];
    }
    for (ll j = 0; j < rightSize; j++)
    {
        right[j] = data[mid + j + 1];
    }

    ll i = 0, j = 0, k = low;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            data[k++] = left[i++];
        }
        else
        {
            data[k++] = right[j++];
        }
    }
    while (i < leftSize)
    {
        data[k++] = left[i++];
    }
    while (j < rightSize)
    {
        data[k++] = right[j++];
    }
}

void mergeSort(std::vector<ll> &data, ll low, ll high)
{
    if (high > low)
    {
        ll mid = low + (high - low) / 2; //used to avoid overflow
        mergeSort(data, low, mid);
        mergeSort(data, mid + 1, high);
        merge(data, low, mid, high);
    }
}

void printArray(std::vector<ll> arr)
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
        ll size, element;
        std::cin >> size;
        std::vector<ll> data;
        data.reserve(size);
        for (ll i = 0; i < size; i++)
        {
            std::cin >> element;
            data.emplace_back(element);
        }
        mergeSort(data, 0, data.size() - 1);
        printArray(data);
    }
    return 0;
}