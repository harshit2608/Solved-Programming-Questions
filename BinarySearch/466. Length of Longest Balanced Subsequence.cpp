int solve(string s)
{
    // stack<char> st;
    // if (s.size() == 1) {
    //     return 0;
    // }
    // st.push(s.at(0));
    // for (int i = 1; i < s.size(); ++i) {
    //     if (st.top() == '(' and s[i] == ')') {
    //         st.push(s[i]);
    //     } else if (st.top() == ')' and s[i] == '(') {
    //         st.push(s[i]);
    //     }
    // }
    // return st.size();

    int op = 0, cl = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            op++;
        }
        else
        {
            if (op == 0)
            {
                cl++;
            }
            else
            {
                op--;
            }
        }
    }

    return (s.size() - (op + cl));
}