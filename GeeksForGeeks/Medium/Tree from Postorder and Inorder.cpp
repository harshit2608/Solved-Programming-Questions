//TODO: O(n*n) approach
int posIndex;
Node *helper(int in[], int post[], int in_start, int in_end)
{
    if (in_start > in_end)
    {
        return nullptr;
    }
    Node *root = new Node(post[posIndex--]);
    int inIndex;
    for (int i = in_start; i <= in_end; ++i)
    {
        if (in[i] == root->data)
        {
            inIndex = i;
            break;
        }
    }
    root->right = helper(in, post, inIndex + 1, in_end);
    root->left = helper(in, post, in_start, inIndex - 1);
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    posIndex = n - 1;
    return helper(in, post, 0, n - 1);
}

//TODO: O(n) approach

Node *helper(int in[], int post[], int is, int ie, int &postIndex, unordered_map<int, int> &mp)
{
    if (is > ie)
    {
        return nullptr;
    }
    Node *root = new Node(post[postIndex--]);
    int inIndex = mp[root->data];
    root->right = helper(in, post, inIndex + 1, ie, postIndex, mp);
    root->left = helper(in, post, is, inIndex - 1, postIndex, mp);
    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int postIndex = n - 1;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[in[i]] = i;
    }
    return helper(in, post, 0, n - 1, postIndex, mp);
}
