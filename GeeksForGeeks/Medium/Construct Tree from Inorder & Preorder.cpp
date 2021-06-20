//TODO: Right now this code has a time complexity of O(n*n) it can be brought down to O(n)
//FIXME: The idea is to use hashing, we can use unorderer set to pre process the for loop and easily get the element in O(1) time
class Solution
{
public:
    int preIndex = 0;
    Node *helper(int in[], int pre[], int in_start, int in_end)
    {
        if (in_start > in_end)
        {
            return nullptr;
        }
        Node *root = new Node(pre[preIndex++]);
        int inIndex;
        for (int i = in_start; i <= in_end; i++)
        {
            if (in[i] == root->data)
            {
                inIndex = i;
                break;
            }
        }
        root->left = helper(in, pre, in_start, inIndex - 1);
        root->right = helper(in, pre, inIndex + 1, in_end);
        return root;
    }

    Node *buildTree(int in[], int pre[], int n)
    {
        return helper(in, pre, 0, n - 1);
    }
};