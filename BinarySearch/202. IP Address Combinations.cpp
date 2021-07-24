bool isValid(string s)
{
    vector<string> temp;
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            temp.push_back(str);
            str = "";
        }
        else
        {
            str = str + s[i];
        }
    }
    temp.push_back(str);

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i].length() > 1 && std::stoi(temp[i]) != 0 && temp[i][0] == '0')
        {
            return false;
        }
        if (temp[i].length() > 1 && std::stoi(temp[i]) == 0)
        {
            return false;
        }
        if (temp[i].length() > 3 || stoi(temp[i]) < 0 || stoi(temp[i]) > 255)
        {
            return false;
        }
    }
    return true;
}

vector<string> solve(string ip)
{
    vector<string> ans;
    string s = ip;

    int len = s.size();
    if (len < 4 || len > 12)
    {
        return ans;
    }

    for (int i = 1; i < len - 2; ++i)
    {
        for (int j = i + 1; j < len - 1; ++j)
        {
            for (int k = j + 1; k < len; ++k)
            {
                s = s.substr(0, k) + "." + s.substr(k, len - k + 2);
                s = s.substr(0, j) + "." + s.substr(j, len - j + 3);
                s = s.substr(0, i) + "." + s.substr(i, len - i + 4);

                if (isValid(s))
                {
                    ans.push_back(s);
                }
                s = ip;
            }
        }
    }

    return ans;
}
