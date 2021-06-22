class Solution
{
public:
    // Function to return the diameter of a Binary Tree.
    int helper(Node *root, int &res)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int lh = helper(root->left, res);
        int rh = helper(root->right, res);
        res = max(res, 1 + lh + rh);
        return 1 + max(lh, rh);
    }
    int diameter(Node *root)
    {
        int res = 1;
        helper(root, res);
        return res;
    }
};