class Solution
{
public:
#define mod int(1e9 + 7)
#define ll long long

    //stores the values of f(n) and f(n+1)
    void fib(ll n, ll &np0, ll &np1)
    {
        if (n == 0)
        {
            np0 = 0;
            np1 = 1;
            return;
        }
        if (n == 1)
        {
            np0 = 1;
            np1 = 1;
        }
        ll k = n / 2, a = 0, b = 0;
        fib(k, a, b);
        if (n % 2 == 0)
        {
            np0 = a * (2 * b % mod - a) % mod;
            np1 = ((a * a) % mod + (b * b) % mod) % mod;
        }
        else
        {
            np0 = ((a * a) % mod + (b * b) % mod) % mod;
            np1 = b * ((b + 2 * a % mod) % mod) % mod;
        }
    }

    int TotalAnimal(long long int N)
    {
        ll np0 = 0, np1 = 0;
        fib(N + 1, np0, np1);
        return (np0 % mod + mod) % mod;
    }
};

//FIXME:
// class Solution
// {
// public:
// #define mod int(1e9 + 7)
// #define ll long long
//     //techworld1->
//     int TotalAnimal(long long int N)
//     {
//         ll next = 0;
//         return fiblog(N + 1, next) % mod;
//     }

//     ll fiblog(ll n, ll &next)
//     {
//         if (n == 0)
//         {
//             next = 1;
//             return 0;
//         }
//         ll np1;
//         ll np0 = fiblog(n / 2, np1) % mod;
//         ll even = (np0 * ((2 * np1) % mod - np0 % mod)) % mod;
//         ll odd = ((np1 * np1) % mod + (np0 % mod) % mod);
//         if (n % 2 == 0)
//         {
//             next = odd % mod;
//             return even % mod;
//         }
//         else
//         {
//             next = (even + odd) % mod;
//             return odd % mod;
//         }
//     }
// };