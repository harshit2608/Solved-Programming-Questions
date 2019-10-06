// September Long Challenge 2019 Divsion 2
// Easy Fibonacci - SEPT19B/FIBEASY

#include<bits/stdc++.h>
typedef int64_t ld;
using namespace std;

ld fib(ld f[], ld n)
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++)
        f[i] = (f[i-1] + f[i-2])%10;
    return f[n];
}

ld findLast(ld f[], ld n)
{
    if(n == 1)
        return f[0];
    else{
        ld ar[n/2];
        ld i, j;
        for(i = 1, j = 0; i < n, j < n/2; i+=2, j++){
            ar[j] = f[i];
            cout<<ar[j]<<" ";
        }
        cout<<endl;
        findLast(ar, n/2);
    }
}

int solve(ld n)
{
    ld f[60] = {0};
    fib(f, 60);
    return f[n%60];
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0);
    while(1){
        ld n;
        cin>>n;
        ld ind[n];
        for(int i = 0; i < n; i++){
            ind[i] = i;
        }
        ld l = findLast(ind, n);
        int res = solve(l);
        cout<<"res: "<<res<<"\n";
    }
    return 0;
}
