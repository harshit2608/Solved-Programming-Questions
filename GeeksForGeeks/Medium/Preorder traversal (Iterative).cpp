vector<int> preOrder(Node *root)
{
    vector<int> res;
    if (root == nullptr)
    {
        return res;
    }
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *curr = s.top();
        res.push_back(curr->data);
        s.pop();
        if (curr->right)
        {
            s.push(curr->right);
        }
        if (curr->left)
        {
            s.push(curr->left);
        }
    }

    return res;
}