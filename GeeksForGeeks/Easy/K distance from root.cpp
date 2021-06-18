// function should print the nodes at k distance from root
void helper(struct Node *root, int k, vector<int> &temp)
{
    if (root == nullptr)
    {
        return;
    }
    if (k == 0)
    {
        temp.push_back(root->data);
    }
    else
    {
        helper(root->left, k - 1, temp);
        helper(root->right, k - 1, temp);
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    helper(root, k, ans);
    return ans;
}