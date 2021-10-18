class Solution
{
public:
    bool isLeaf(Node *root)
    {
        if (!root->left && !root->right)
        {
            return true;
        }
        return false;
    }

    void leftboundary(Node *root, vector<int> &ans)
    {
        Node *temp = root->left;
        while (temp)
        {
            if (!isLeaf(temp))
            {
                ans.push_back(temp->data);
            }
            if (temp->left)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
    }

    void rightboundary(Node *root, vector<int> &ans)
    {
        stack<int> st;
        Node *temp = root->right;
        while (temp)
        {
            if (!isLeaf(temp))
            {
                st.push(temp->data);
            }
            if (temp->right)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }

    void addLeaf(Node *root, vector<int> &ans)
    {
        if (root->left)
        {
            addLeaf(root->left, ans);
        }
        if (isLeaf(root))
        {
            ans.push_back(root->data);
            return;
        }
        if (root->right)
        {
            addLeaf(root->right, ans);
        }
    }

    vector<int> printBoundary(Node *root)
    {
        vector<int> ans;
        if (!root)
        {
            return ans;
        }
        if (!isLeaf(root))
        {
            ans.push_back(root->data);
        }
        leftboundary(root, ans);
        addLeaf(root, ans);
        rightboundary(root, ans);

        return ans;
    }
};