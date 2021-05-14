class Solution
{
public:
    int numberOfSteps(int num)
    {
        return num ? log2(num) + bitset<32>(num).count() : 0;
    }
};