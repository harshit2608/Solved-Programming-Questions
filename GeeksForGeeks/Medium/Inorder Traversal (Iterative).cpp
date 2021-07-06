class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        vector<int> res;
        if (root == nullptr)
        {
            return res;
        }

        stack<Node *> s;
        Node *curr = root;
        while (curr != nullptr || !s.empty())
        {
            while (curr != nullptr)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            res.push_back(curr->data);
            curr = curr->right;
        }

        return res;
    }
};
