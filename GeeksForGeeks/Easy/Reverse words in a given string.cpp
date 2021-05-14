class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        vector<string> words;
        string word = "", res = "";
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '.')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word += S[i];
            }
        }
        words.push_back(word);
        for (int i = words.size() - 1; i >= 0; i--)
        {
            res += words[i];
            if (i != 0)
                res += ".";
        }
        return res;
    }
};

//TODO: Correct the beloe approach

class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        vector<string> ans;
        int currdot = S.size();
        string word = "";
        for (int i = S.size(); i >= 0; i--)
        {
            if (S[i] != '.')
            {
                word = word + S[i];
            }
            else
            {
                reverse(word.begin(), word.end());
                ans.push_back(word);
                word = "";
                ans.push_back(".");
            }
        }

        ans.push_back(word);

        string r = "";

        for (int i = 0; i < ans.size(); i++)
        {
            r += ans[i];
        }
        return r;
    }
};