#include <bits/stdc++.h>

using ll = long long int;

ll kadane(std::vector<ll> &data)
{
    ll res = data[0], maxsum = data[0];
    for (ll i = 1; i < data.size(); ++i)
    {
        maxsum = std::max(data[i], maxsum + data[i]);
        res = std::max(res, maxsum);
    }
    return res;
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
        std::cout << kadane(data) << std::endl;
        data.clear();
    }
    return 0;
}