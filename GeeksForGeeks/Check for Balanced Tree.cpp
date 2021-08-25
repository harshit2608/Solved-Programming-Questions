//Function to check whether a binary tree is balanced or not.
int check(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int lh = check(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = check(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    else
    {
        return 1 + max(lh, rh);
    }
}
bool isBalanced(Node *root)
{
    int ans = check(root);
    if (ans == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}