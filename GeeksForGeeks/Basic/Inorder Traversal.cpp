class Solution
{
public:
    // Function to return a list containing the inorder traversal of the tree.
    //Function to return a list containing the preorder traversal of the tree.
    void helper(Node *root, vector<int> &temp)
    {
        if (root == nullptr)
        {
            return;
        }
        helper(root->left, temp);
        temp.push_back(root->data);
        helper(root->right, temp);
    }

    vector<int> inOrder(Node *root)
    {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};
