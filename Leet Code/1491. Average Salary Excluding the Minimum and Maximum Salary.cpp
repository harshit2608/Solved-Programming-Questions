class Solution
{
public:
    double average(vector<int> &salary)
    {
        int max = *max_element(salary.begin(), salary.end());
        int i, min = *min_element(salary.begin(), salary.end());
        double ans = 0;
        for (i = 0; i < salary.size(); i++)
        {
            ans += salary[i];
        }
        ans = ans - (max + min);
        return ans / (i - 2);
    }
};