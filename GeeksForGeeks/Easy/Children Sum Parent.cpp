int isSumProperty(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }

    if (root->left == nullptr && root->right == nullptr)
    {
        return true;
    }

    int sum = 0;
    if (root->left)
    {
        sum += root->left->data;
    }
    if (root->right)
    {
        sum += root->right->data;
    }
    return (root->data == sum && isSumProperty(root->left) && isSumProperty(root->right));
}