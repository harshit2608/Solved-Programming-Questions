class Solution
{
public:
    void correctBST(struct Node *root)
    {
        Node *curr = root, *rnode, *prev = nullptr, *first = nullptr, *second = nullptr;

        while (curr != nullptr)
        {
            if (!curr->left)
            {
                if (prev && prev->data > curr->data)
                {
                    if (!first)
                    {
                        second = curr;
                        first = prev;
                    }
                    else
                        second = curr;
                }

                prev = curr;
                curr = curr->right;
            }
            else
            {
                rnode = curr->left;
                while (rnode->right && rnode->right != curr)
                    rnode = rnode->right;

                if (!rnode->right)
                {
                    rnode->right = curr;
                    curr = curr->left;
                }
                else
                {
                    if (prev && prev->data > curr->data)
                    {
                        if (!first)
                        {
                            second = curr;
                            first = prev;
                        }
                        else
                            second = curr;
                    }
                    prev = curr;

                    rnode->right = NULL;
                    curr = curr->right;
                }
            }
        }
        swap(first->data, second->data);
    }
};