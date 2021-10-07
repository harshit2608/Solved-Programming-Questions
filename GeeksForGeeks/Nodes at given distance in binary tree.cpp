class Solution
{
private:
    unordered_map<Node *, Node *> parents;
    Node *temp;
    void markParents(Node *root, Node *par, int target)
    {
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            if (curr->data == target)
            {
                temp = curr;
            }
            if (curr->left)
            {
                parents[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right)
            {
                parents[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

public:
    vector<int> KDistanceNodes(Node *root, int target, int k)
    {
        vector<int> ans;
        if (root == nullptr)
        {
            return ans;
        }
        unordered_map<Node *, bool> visited;
        queue<Node *> q;
        int level = 0;

        markParents(root, nullptr, target);
        q.push(temp);
        visited[temp] = true;

        while (!q.empty())
        {
            if (level == k)
            {
                while (!q.empty())
                {
                    ans.push_back(q.front()->data);
                    q.pop();
                }
                // break;
            }
            int sx = q.size();
            for (int i = 0; i < sx; ++i)
            {
                Node *curr = q.front();
                q.pop();
                if (curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if (curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if (parents[curr] && !visited[parents[curr]])
                {
                    q.push(parents[curr]);
                    visited[parents[curr]] = true;
                }
            }
            level++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};