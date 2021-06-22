vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    queue<Node *> q;
    stack<int> s;
    q.push(root);
    bool reverse = true;
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; ++i)
        {
            Node *curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr->data);
            }
            else
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
        if (reverse)
        {
            while (!s.empty())
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
        reverse = !reverse;
    }
    return ans;
}

//TODO: Better approach as it pushes the elements and pops them only once

//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    stack<Node *> s1;
    stack<Node *> s2;

    s1.push(root);

    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);

            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }

        while (!s2.empty())
        {
            Node *temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);

            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
    return ans;
}