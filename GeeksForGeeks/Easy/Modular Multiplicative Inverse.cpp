class Solution
{
public:
    //Complete this function
    int modInverse(int a, int m)
    {
        for (int x = 1; x < m; x++)
        {
            if ((x * a) % m == 1)
                return x;
        }
        return -1;
    }
};