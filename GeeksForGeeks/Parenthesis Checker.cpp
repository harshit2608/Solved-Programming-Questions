class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool matching(char a, char b)
    {
        return ((a == '{' and b == '}') || (a == '(' and b == ')') || (a == '[' and b == ']'));
    }

    bool ispar(string x)
    {
        stack<char> s;
        char el;
        for (char i : x)
        {
            if (i == '{' || i == '(' || i == '[')
            {
                s.push(i);
            }
            else
            {
                if (s.empty())
                {
                    return false;
                }
                else if (matching(s.top(), i) == false)
                {
                    return false;
                }
                else
                {
                    s.pop();
                }
            }
        }

        return s.empty();
    }
};