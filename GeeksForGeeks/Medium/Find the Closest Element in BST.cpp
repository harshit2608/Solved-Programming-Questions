class Solution
{
public:
    //Function to find the least absolute difference between any node
    //value of the BST and the given integer.

    int minDiff(Node *root, int K)
    {
        if (root == nullptr)
        {
            return -1;
        }
        int diff = INT_MAX;
        while (root != nullptr)
        {
            if (root->data == K)
            {
                return 0;
            }
            else if (root->data > K)
            {
                diff = min(diff, abs(root->data - K));
                root = root->left;
            }
            else
            {
                diff = min(diff, abs(root->data - K));
                root = root->right;
            }
        }
        return diff;
    }
};