vector<vector<int>> levelOrder(Node *node)
{
    vector<int> v1;
    vector<vector<int>> v2;
    queue<Node *> q;
    q.push(node);
    while (q.empty() == false)
    {
        int sz = q.size();
        while (sz--)
        {
            Node *curr = q.front();
            q.pop();
            v1.push_back(curr->data);
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
        v2.push_back(v1);
        v1.clear();
    }

    return v2;
}