class Solution
{
public:
    //Function to convert binary tree to doubly linked list and return it
    Node *prev = nullptr;
    Node *bToDLL(Node *root)
    {
        if (root == nullptr)
        {
            return root;
        }
        Node *head = bToDLL(root->left);
        if (prev == nullptr)
        {
            head = root;
        }
        else
        {
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        bToDLL(root->right);
        return head;
    }
};