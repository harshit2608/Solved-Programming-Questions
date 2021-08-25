class Solution
{
public:
    vector<int> BoundaryElements(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        for (int row = 0; row < matrix.size(); row++)
        {
            for (int col = 0; col < matrix.size(); col++)
            {
                if (row == 0 || row == matrix.size() - 1 || col == 0 || col == matrix.size() - 1)
                {
                    ans.push_back(matrix[row][col]);
                }
            }
        }

        return ans;
    }
};