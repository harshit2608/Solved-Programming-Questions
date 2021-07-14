vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    queue<Node *> q;
    stack<int> s;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        s.push(curr->data);
        q.pop();
        if (curr->right)
        {
            q.push(curr->right);
        }
        if (curr->left)
        {
            q.push(curr->left);
        }
    }
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}