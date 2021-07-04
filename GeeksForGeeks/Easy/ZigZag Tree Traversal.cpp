vector<int> zigZagTraversal(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    stack<Node *> s1, s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *curr = s1.top();
            ans.push_back(curr->data);
            if (curr->left)
            {
                s2.push(curr->left);
            }
            if (curr->right)
            {
                s2.push(curr->right);
            }
            s1.pop();
        }

        while (!s2.empty())
        {
            Node *curr = s2.top();
            ans.push_back(curr->data);
            if (curr->right)
            {
                s1.push(curr->right);
            }
            if (curr->left)
            {
                s1.push(curr->left);
            }
            s2.pop();
        }
    }
    return ans;
}