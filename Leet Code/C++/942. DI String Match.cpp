//TODO:
/**
 * The idea is to simply push back from 0 if its i else push back from size of string if its d 
*/

class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        int n = s.size(), itr = 0, dtr = s.size();
        vector<int> ans;
        ans.reserve(n + 1);
        for (int i = 0; i <= n; ++i)
        {
            if (s[i] == 'I')
            {
                ans.push_back(itr++);
            }
            else
            {
                ans.push_back(dtr--);
            }
        }
        return ans;
    }
};