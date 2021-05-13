#include <iostream>

using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n, arr[1001], k, ans =-1, minimum = 1000000000;
        cin>>n>>k;
        for (int i =0;i<n;i++)
        {
            cin>>arr[i];
        }

        for (ll i=0;i<n;i++)
        {
            if ((k%arr[i])==0)
            {
                ll temp = (k/arr[i]);
                if (temp<minimum)
                {
                    minimum =temp;
                    ans = arr[i];
                }
            }
        }

        cout<<ans<<endl;
    }
}