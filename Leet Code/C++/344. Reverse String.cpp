class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int last = s.size() - 1;
        int first = 0;
        while (first < last)
        {
            swap(s[first], s[last]);
            first++;
            last--;
        }
    }
};