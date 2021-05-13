#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
    cpp_int x[120]; 
    int i, t, n;
    x[0] = 1;
    for(i = 1; i <= 100; i++){
        x[i] = x[i-1]*i;
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<x[n]<<"\n";
    }
}
   
