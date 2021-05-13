#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long int testCases, N, i, k, var;
	cin >> testCases;
	while(testCases--){
	    long int sum = 0;
	    cin >> N;
	    priority_queue<int> arr;
	    for(i = 0; i < N; i++){
	        cin >> var;
	        arr.push(var);
	    }
	    k = 0;
	    int largest = 0;
	    while(!arr.empty()){
	        largest = arr.top() - (k++);
	        arr.pop();
	        if(largest >= 0)
	            sum = sum + largest;
	    }
	    cout << sum%1000000007 << "\n";
	}
	return 0;
}