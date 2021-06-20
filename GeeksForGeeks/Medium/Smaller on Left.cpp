vector<int> Smallestonleft(int arr[], int n)
{
    vector<int> ans;
    set<int> s;
    set<int>::iterator it;
    for (int i = 0; i < n; ++i)
    {
        s.insert(arr[i]);
        it = s.lower_bound(arr[i]);
        if (it == s.begin())
        {
            ans.push_back(-1);
        }
        else
        {
            it--;
            ans.push_back(*it);
        }
    }
    return ans;
}

// vector<int> Smallestonleft(int arr[], int n)
// {
//     vector<int> ans;
//     stack<int> s;
//     ans.push_back(-1);
//     s.push(arr[0]);
//     for (int i = 1; i < n; ++i)
//     {
//         while (s.empty() == false and arr[i] < s.top())
//         {
//             s.pop();
//         }
//         int el = s.empty() ? -1 : s.top();
//         ans.push_back(el);
//         s.push(arr[i]);
//     }
//     return ans;
// }