class Solution
{
public:
    //Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        else
        {
            return max(height(node->left), height(node->right)) + 1;
        }
    }
};
