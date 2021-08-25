//Function to insert a node in a BST.
Node *insert(Node *root, int Key)
{
    if (root == nullptr)
    {
        return new Node(Key);
    }

    if (root->data > Key)
    {
        root->left = insert(root->left, Key);
    }
    else if (root->data < Key)
    {
        root->right = insert(root->right, Key);
    }
    return root;
}