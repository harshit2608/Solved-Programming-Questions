vector<int> bottomView(Node *root)
{
    vector<int> ans;
    map<int, vector<int>> m;
    queue<pair<Node *, int>> q;
    int dist = 0;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *curr = p.first;
        dist = p.second;
        m[dist].push_back(curr->data);
        q.pop();
        if (curr->left)
        {
            q.push(make_pair(curr->left, dist - 1));
        }
        if (curr->right)
        {
            q.push(make_pair(curr->right, dist + 1));
        }
    }
    map<int, vector<int>>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        ans.push_back(itr->second.back());
    }
    return ans;
}