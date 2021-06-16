//TODO:
/**
 * The idea is to simply check for the every number in the range. 
 * That is to get every digit of the number and check if divided the number by digit and get rem as 0 tehn we push back 
 * the number in the result. 
*/

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> res;
        for (int i = left; i <= right; ++i)
        {
            int temp = i;
            while (temp > 0)
            {
                int digit = temp % 10;
                if (digit == 0 || (i % digit) != 0)
                {
                    break;
                }
                temp = temp / 10;
            }
            if (temp == 0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};