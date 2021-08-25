vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    else
    {
        return ans;
    }
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; ++i)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                ans.push_back(curr->data);
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
    return ans;
}
