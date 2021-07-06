bool search(Node *root, int x)
{
    // if(root == nullptr)
    // {
    //     return true;
    // }

    while (root != nullptr)
    {
        if (root->data == x)
        {
            return true;
        }
        if (root->data < x)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return false;
}
