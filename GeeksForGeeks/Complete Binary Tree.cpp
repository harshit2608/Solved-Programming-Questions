bool isCompleteBT(Node *root)
{
    bool bt = false;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == nullptr)
        {
            bt = true;
        }
        else
        {
            if (bt == true)
            {
                return false;
            }
            else
            {
                q.push(curr->left);
                q.push(curr->right);
            }
        }
    }
    return true;
}
