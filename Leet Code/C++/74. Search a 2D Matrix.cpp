class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (!matrix.size())
        {
            return false;
        }
        int row = 0, col = matrix[0].size() - 1;
        while (col >= 0 && row < matrix.size())
        {
            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] > target)
            {
                col--;
            }
            else
            {
                row++;
            }
        }
        return false;
    }
};