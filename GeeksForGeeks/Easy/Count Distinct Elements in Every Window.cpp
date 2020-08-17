// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


vector <int> countDistinct (int A[], int n, int k)
{
    unordered_map<int, int> count{0};
    vector<int> ans;
    int s=0;
    for (int i = 0; i < k;i++)
    {
        count[A[i]]++;
    }

    for (int i = 0; i < k;i++)
    {
        if(count[i]>0)
        {
            s++;
            a
        }
    }
    return ans;
}