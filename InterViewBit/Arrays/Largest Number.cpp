bool compare(int &x, int &y)
{
    long long int xy = stoll(to_string(x) + to_string(y));
    long long int yx = stoll(to_string(y) + to_string(x));
    return xy >= yx;
}
string Solution::largestNumber(const vector<int> &A)
{
    string ans = "";
    vector<int> B(A);
    sort(B.begin(), B.end(), compare);
    for (auto val : B)
        ans += to_string(val);
    return (ans[0] == '0') ? "0" : ans;
}