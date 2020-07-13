#include <iostream>

using namespace std;

#define MX (int(1e5))
#define ll long long int

ll N, k;
ll arr[MX];

void solution()
{
    cin >> N >> k;
    int answer = 0;
    int next = k;
    for (ll i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        if(next!=x)
        {
            next = k;
        }
        if(x==next)
        {
            next--;
            if(next == 0)
            {
                answer++;
                next = k;
            }
        } 
    }
    cout << answer << endl;
}

int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solution();
    }
}