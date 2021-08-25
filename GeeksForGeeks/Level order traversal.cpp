class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        vector<int> ans;
        if (node == nullptr)
        {
            return ans;
        }
        queue<Node *> q;
        q.push(node);
        while (q.empty() == false)
        {
            Node *curr = q.front();
            q.pop();
            ans.push_back(curr->data);
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
};