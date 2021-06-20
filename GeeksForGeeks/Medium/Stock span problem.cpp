class Solution
{
public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        vector<int> ans;
        ans.reserve(n);
        stack<int> s;
        s.push(0);
        ans.push_back(1);
        for (int i = 1; i < n; ++i)
        {
            while (s.empty() == false && price[s.top()] <= price[i])
            {
                s.pop();
            }
            int span = s.empty() ? i + 1 : i - s.top();
            s.push(i);
            ans.push_back(span);
        }
        return ans;
    }
};
