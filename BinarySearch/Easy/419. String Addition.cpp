string solve(string a, string b)
{
    if (a.length() > b.length())
        swap(a, b);

    int n = a.length(), m = b.length();
    int diff = m - n;

    string s = "";
    int carry = 0, a1, b1;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i + diff] - '0') + carry;
        s += to_string(sum % 10);
        carry = sum / 10;
    }

    for (int i = m - n - 1; i >= 0; i--)
    {
        int sum = ((b[i] - '0') + carry);
        s += to_string(sum % 10);
        carry = sum / 10;
    }

    if (carry)
    {
        s += to_string(carry);
    }
    reverse(s.begin(), s.end());
    return s;
}