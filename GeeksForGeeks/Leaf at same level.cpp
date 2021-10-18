class Solution
{
public:
    /*You are required to complete this method*/
    void solve(Node *root, bool &ans, int level, int &depth)
    {
        if (!root)
            return;
        if (ans == false)
            return;
        if (!root->left && !root->right)
        {
            if (depth == -1)
            {
                depth = level;
            }
            else
            {
                if (depth != level)
                {
                    ans = false;
                }
            }
        }
        solve(root->left, ans, level + 1, depth);
        solve(root->right, ans, level + 1, depth);
    }

    bool check(Node *root)
    {
        bool ans = true;
        if (!root)
            return true;
        int depth = -1;
        solve(root, ans, 0, depth);
        return ans;
    }
};