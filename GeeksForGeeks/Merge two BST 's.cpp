class Solution
{
public:
    //Function to return a list of integers denoting the node
    //values of both the BST in a sorted order.
    void spush(Node *root, stack<Node *> &s)
    {
        while (root != nullptr)
        {
            s.push(root);
            root = root->left;
        }
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> ans;
        stack<Node *> s1;
        stack<Node *> s2;
        spush(root1, s1);
        spush(root2, s2);

        while (!s1.empty() || !s2.empty())
        {
            int d1 = (!s1.empty()) ? s1.top()->data : INT_MAX;
            int d2 = (!s2.empty()) ? s2.top()->data : INT_MAX;
            if (d1 <= d2)
            {
                ans.push_back(d1);
                Node *temp = s1.top();
                s1.pop();
                spush(temp->right, s1);
            }
            else
            {
                ans.push_back(d2);
                Node *temp = s2.top();
                s2.pop();
                spush(temp->right, s2);
            }
        }
        return ans;
    }
};