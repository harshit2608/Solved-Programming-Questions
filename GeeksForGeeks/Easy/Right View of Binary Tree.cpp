class Solution
{
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        queue<Node *> q;
        if (root)
        {
            q.push(root);
        }
        else
        {
            return ans;
        }
        while (q.empty() == false)
        {
            int count = q.size();
            for (int i = 0; i < count; ++i)
            {
                Node *curr = q.front();
                if (i == count - 1)
                {
                    ans.push_back(curr->data);
                }
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
        return ans;
    }
};