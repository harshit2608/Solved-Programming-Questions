class Solution
{
public:
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int lhs = solve(root->left);
        int rhs = solve(root->right);
        int temp = root->data;
        root->data = lhs + rhs;
        return temp + lhs + rhs;
    }
    void toSumTree(Node *node)
    {
        solve(node);
    }
};