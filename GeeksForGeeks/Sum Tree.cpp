class Solution
{
public:
    int solve(Node *root, bool &ans)
    {
        if (!root)
        {
            return 0;
        }
        int temp = root->data;
        int lh = solve(root->left, ans);
        int rh = solve(root->right, ans);
        if (temp != lh + rh && root->left && root->right)
        {
            ans = false;
        }
        return lh + rh + temp;
    }

    bool isSumTree(Node *root)
    {
        bool ans = true;
        if (!root)
        {
            return true;
        }
        solve(root, ans);
        return ans;
    }
};