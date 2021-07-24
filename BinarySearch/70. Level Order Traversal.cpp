/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree *node)
{
    vector<int> ans;
    if (node == nullptr)
    {
        return ans;
    }
    queue<Tree *> q;
    q.push(node);
    while (q.empty() == false)
    {
        Tree *curr = q.front();
        q.pop();
        ans.push_back(curr->val);
        if (curr->left != nullptr)
        {
            q.push(curr->left);
        }
        if (curr->right != nullptr)
        {
            q.push(curr->right);
        }
    }
    return ans;
}