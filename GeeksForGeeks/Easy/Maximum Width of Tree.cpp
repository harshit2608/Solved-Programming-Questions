class Solution
{
public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        queue<Node *> q;
        q.push(root);
        int res = 0;
        while (!q.empty())
        {
            int count = q.size();
            res = max(res, count);
            for (int i = 0; i < count; ++i)
            {
                Node *curr = q.front();
                q.pop();
                if (curr->left)
                {
                    q.push(curr->left);
                }
                if (curr->right)
                {
                    q.push(curr->right);
                }
            }
        }
        return res;
    }
};