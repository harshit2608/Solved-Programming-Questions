class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        unordered_set<int> s;
        s.insert(a, a + n);
        s.insert(b, b + m);
        return s.size();
    }
};
