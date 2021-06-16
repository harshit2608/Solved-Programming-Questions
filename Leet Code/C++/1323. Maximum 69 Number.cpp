//TODO:
/**
 *  FIXME: Naive approah
 *      WE can store the number in an array and sort it and then join it to get max number
 * 
 * FIXME: Better approach
 *  Replace the first 6 with 9 and done
 *  
*/

class Solution
{
public:
    int maximum69Number(int num)
    {
        string s = to_string(num);
        for (auto &i : s)
        {
            if (i == '6')
            {
                i = '9';
                break;
            }
        }
        return stoi(s);
    }
};