vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        while (root)
        {
            if (root->left)
            {
                q.push(root->left);
            }
            ans.push_back(root->data);
            root = root->right;
        }
    }
    return ans;
}