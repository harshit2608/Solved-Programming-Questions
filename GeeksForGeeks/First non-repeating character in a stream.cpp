class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        int count[26];
        queue<char> q;
        string ans = "";
        memset(count, 0, sizeof(count));
        for (int i = 0; i < A.size(); ++i)
        {
            if (count[A[i] - 'a'] == 0)
            {
                q.push(A[i]);
            }
            count[A[i] - 'a']++;
            while (!q.empty())
            {
                if (count[q.front() - 'a'] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};