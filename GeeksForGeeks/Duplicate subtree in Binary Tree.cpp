class Solution
{
public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    unordered_map<string, int> mp;
    string solve(Node *root)
    {
        if (!root)
            return "@";
        string str = "";
        if (!root->left && !root->right)
        {
            str = to_string(root->data);
            return str;
        }
        str += to_string(root->data);
        str += solve(root->left);
        str += solve(root->right);
        mp[str]++;
        return str;
    }
    int dupSub(Node *root)
    {
        solve(root);
        for (auto it : mp)
        {
            if (it.second >= 2)
                return true;
        }
        return false;
    }
};