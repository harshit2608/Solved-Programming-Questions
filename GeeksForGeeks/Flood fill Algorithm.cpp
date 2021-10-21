class Solution
{
public:
    void fill(vector<vector<int>> &image, int color, int newcolor, int i, int j, int x, int y)
    {
        if (x < 0 || y < 0 || x > i || y > j || image[x][y] != color || image[x][y] == newcolor)
        {
            return;
        }

        image[x][y] = newcolor;
        fill(image, color, newcolor, i, j, x - 1, y);
        fill(image, color, newcolor, i, j, x + 1, y);
        fill(image, color, newcolor, i, j, x, y - 1);
        fill(image, color, newcolor, i, j, x, y + 1);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int color = image[sr][sc];
        int i = image.size() - 1;
        int j = image[0].size() - 1;
        fill(image, color, newColor, i, j, sr, sc);
        return image;
    }
};
