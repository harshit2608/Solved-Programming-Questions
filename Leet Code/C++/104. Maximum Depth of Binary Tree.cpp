class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        // int l = 1+ maxDepth(root->left);
        // int r = 1 + maxDepth(root->right);

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};