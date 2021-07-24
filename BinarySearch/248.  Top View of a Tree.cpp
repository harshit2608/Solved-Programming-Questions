/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }
    map<int, vector<int>> m;
    queue<pair<Tree *, int>> q;
    int dist = 0;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Tree *, int> p = q.front();
        Tree *curr = p.first;
        dist = p.second;
        m[dist].push_back(curr->val);
        q.pop();
        if (curr->left)
        {
            q.push({curr->left, -1 + dist});
        }
        if (curr->right)
        {
            q.push({curr->right, +1 + dist});
        }
    }
    for (auto &it : m)
    {
        ans.push_back(it.second.front());
    }
    return ans;
}