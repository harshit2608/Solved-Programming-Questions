class Solution
{
public:
    int findMax(Node *root)
    {
        if (root == nullptr)
        {
            return INT_MIN;
        }
        else
        {
            return max(root->data, max(findMax(root->right), findMax(root->left)));
        }
    }
    int findMin(Node *root)
    {
        if (root == nullptr)
        {
            return INT_MAX;
        }
        else
        {
            return min(root->data, min(findMin(root->right), findMin(root->left)));
        }
    }