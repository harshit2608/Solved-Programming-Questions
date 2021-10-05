class Solution
{
public:
// #define ll long long
#define mod int(1e9 + 7)
    ll arr[int(1e5 + 1)];
    ll countStrings(int n)
    {
        memset(arr, -1, sizeof(arr));
        return fib(n + 2) % mod;
    }

    ll fib(ll n)
    {
        if (n == 1 || n == 0)
        {
            return n % mod;
        }
        if (arr[n] != -1)
        {
            return arr[n] % mod;
        }
        return arr[n] = fib(n - 1) % mod + fib(n - 2) % mod;
    }
};