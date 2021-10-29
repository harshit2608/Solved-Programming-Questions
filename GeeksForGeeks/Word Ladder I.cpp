class Solution
{
public:
    int wordLadderLength(string startWord, string targetWord, vector<string> &wordList)
    {
        int ans = 1;
        unordered_set<string> st(wordList.begin(), wordList.end());
        if (st.find(targetWord) == st.end())
        {
            return 0;
        }
        queue<string> q;
        q.push(startWord);
        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                string str = q.front();
                q.pop();
                if (str == targetWord)
                {
                    return ans;
                }
                for (int i = 0; i < str.size(); ++i)
                {
                    for (char j = 'a'; j <= 'z'; ++j)
                    {
                        char temp = str[i];
                        str[i] = j;
                        if (st.find(str) != st.end())
                        {
                            q.push(str);
                            st.erase(str);
                        }
                        str[i] = temp;
                    }
                }
            }
            ans++;
        }
        return 0;
    }
};