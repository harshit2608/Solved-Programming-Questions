/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree *solve(Tree *root)
{
    if (root == nullptr)
    {
        return root;
    }

    queue<Tree *> q;
    q.push(root);
    while (!q.empty())
    {
        Tree *curr = q.front();
        q.pop();
        Tree *temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
        if (curr->left)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    return root;
}