class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &as)
    {
        stack<int> s;
        for (int i = 0; i < as.size();)
        {
            if (s.empty())
            {
                s.push(as[i++]);
            }
            else
            {
                if (s.top() > 0 && as[i] < 0)
                {
                    if (s.top() == abs(as[i]))
                    {
                        i++;
                        s.pop();
                    }
                    else if (s.top() < abs(as[i]))
                    {
                        s.pop();
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                {
                    s.push(as[i++]);
                }
            }
        }

        vector<int> res(s.size(), 0);
        for (int i = res.size() - 1; i >= 0; i--)
        {
            res[i] = s.top();
            s.pop();
        }
        return res;
    }
};