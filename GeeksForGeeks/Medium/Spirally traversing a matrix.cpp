class Solution
{
public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        int top = 0, left = 0, bottom = matrix.size() - 1, right = matrix[0].size() - 1;
        vector<int> res;
        while (top <= bottom and left <= right)
        {
            for (int i = left; i <= right; ++i)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; ++i)
            {
                res.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; --i)
                {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; --i)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};