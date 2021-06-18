void helper(Node *root, vector<int> &temp)
{
    if (root == nullptr)
    {
        return;
    }
    helper(root->left, temp);
    helper(root->right, temp);
    temp.push_back(root->data);
}

vector<int> postOrder(Node *root)
{
    vector<int> ans;
    helper(root, ans);
    return ans;
}
