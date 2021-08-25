// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
public:
    void inorder(Node *root, int &k, int &ans)
    {
        if (root == NULL)
            return;
        inorder(root->right, k, ans);
        k--;
        if (k == 0)
        {
            ans = root->data;
            return;
        }
        inorder(root->left, k, ans);
    }

    int kthLargest(Node *root, int K)
    {
        int ans = 0;
        inorder(root, K, ans);
        return ans;
    }
};
