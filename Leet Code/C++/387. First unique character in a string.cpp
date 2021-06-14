class Solution
{
public:
    int firstUniqChar(string s)
    {
        int CHAR = 256;
        int visited[CHAR];
        memset(visited, -1, sizeof(visited));

        int res = INT_MAX;
        for (int i = 0; i < s.size(); i++)
        {
            if (visited[s[i]] == -1)
            {
                visited[s[i]] = i;
            }
            else
            {
                visited[s[i]] = -2;
            }
        }

        for (int i = 0; i < CHAR; i++)
        {
            if (visited[i] >= 0)
            {
                res = min(res, visited[i]);
            }
        }

        return (res == INT_MAX ? -1 : res);
    }
};

//TODO: Approach 2 below

class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> v(26, 0);
        for (char c : s)
            v[c - 'a']++;
        for (int i = 0; i < s.length(); i++)
        {
            if (v[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};