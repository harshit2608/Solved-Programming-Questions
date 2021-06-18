//Function to return a list containing the preorder traversal of the tree.
void helper(Node *root, vector<int> &temp)
{
    if (root == nullptr)
    {
        return;
    }
    temp.push_back(root->data);
    helper(root->left, temp);
    helper(root->right, temp);
}

vector<int> preorder(Node *root)
{
    vector<int> ans;
    helper(root, ans);
    return ans;
}