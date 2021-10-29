class Solution
{
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string> &wordList)
    {
        vector<vector<string>> ans;
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<vector<string>> q;
        unordered_set<string> vis;

        // if(st.find(endWord) == st.end())
        // {
        //     return ans;
        // }

        q.push({beginWord});
        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                vector<string> curr = q.front();
                q.pop();
                string str = curr.back();
                for (int i = 0; i < str.size(); ++i)
                {
                    for (char j = 'a'; j <= 'z'; ++j)
                    {
                        char c = str[i];
                        str[i] = j;
                        if (st.find(str) != st.end())
                        {
                            vector<string> temp = curr;
                            temp.push_back(str);
                            vis.insert(str);
                            if (str == endWord)
                            {
                                ans.push_back(temp);
                            }
                            else
                            {
                                q.push(temp);
                            }
                        }
                        str[i] = c;
                    }
                }
            }

            for (auto &x : vis)
            {
                st.erase(x);
            }
        }
        return ans;
    }
};