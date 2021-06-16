//TODO:
/**
 * Get the index of the ruleKey first and then check in the vector it will only use one for loop
*/

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int count = 0, j = 0;
        if (ruleKey == "type")
        {
            j = 0;
        }
        else if (ruleKey == "color")
        {
            j = 1;
        }
        else
        {
            j = 2;
        }
        for (auto &i : items)
        {
            if (i[j] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};