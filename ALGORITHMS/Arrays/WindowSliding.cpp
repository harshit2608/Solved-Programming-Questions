//TODO:
//* Given an unsorted array of non-negative integers.Find if there is a subarray wiht given sum*/

#include <bits/stdc++.h>

using ll = long long int;

bool windowSliding(std::vector<ll> &data, ll target)
{
    ll curr_sum = data[0], start = 0;
    for (ll i = 1; i < data.size(); ++i)
    {
        while (curr_sum > target && start < i - 1)
        {
            curr_sum = curr_sum - data[start];
            start++;
        }
        if (curr_sum == target)
        {
            return true;
        }
        else
        {
            curr_sum += data[i];
        }
    }
    return curr_sum == target;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        ll size, element, target;
        std::cin >> size >> target;
        std::vector<ll> data;
        data.reserve(size);
        for (ll i = 0; i < size; i++)
        {
            std::cin >> element;
            data.emplace_back(element);
        }
        std::cout << windowSliding(data, target) << std::endl;
        data.clear();
    }
    return 0;
}