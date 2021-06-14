class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        vector<bool> hash(26, false);
        for (int i = 0; i < sentence.length(); i++)
        {
            hash[sentence[i] - 'a'] = true;
        }
        for (int i = 0; i < hash.size(); i++)
        {
            if (hash[i] != true)
            {
                return false;
            }
        }
        return true;
    }
};