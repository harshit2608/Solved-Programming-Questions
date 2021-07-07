/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// static auto _ = [] ()
// {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        //     int ans =0;
        //     queue<TreeNode*> q;
        //     if(root == nullptr)
        //     {
        //         return ans;
        //     }
        //     q.push(root);
        //     while(!q.empty())
        //     {
        //         int sz = q.size();
        //         while(sz--)
        //         {
        //             TreeNode* curr = q.front();
        //             if(curr->val >=low and curr->val <=high)
        //             {
        //                 ans += curr->val;
        //             }
        //             q.pop();
        //             if(curr->left)
        //             {
        //                 q.push(curr->left);
        //             }
        //             if(curr->right)
        //             {
        //                 q.push(curr->right);
        //             }
        //         }
        //     }
        //     return ans;
        // }
        int ans = 0;
        if (root == nullptr)
        {
            return ans;
        }
        if (root->val <= high && root->val >= low)
        {
            ans += root->val;
        }
        ans += rangeSumBST(root->left, low, high);
        ans += rangeSumBST(root->right, low, high);
        root->left = root->right = nullptr;
        return ans;
    }
};