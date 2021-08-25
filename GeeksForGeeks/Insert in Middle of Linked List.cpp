Node *insertInMiddle(Node *head, int x)
{
    Node *val = new Node(x);
    if (head == nullptr)
    {
        head = val;
        return head;
    }

    Node *curr = head;
    int count = 0;
    while (curr->next != nullptr)
    {
        curr = curr->next;
        count++;
    }

    curr = head;
    int mid = (count) / 2;
    while (mid--)
    {
        curr = curr->next;
    }
    val->next = curr->next;
    curr->next = val;
    //delete curr;

    return head;
}