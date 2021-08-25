void addNode(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    Node *curr = head;
    for (int i = 0; curr->next != nullptr && i < pos; i++)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    temp->prev = curr;
}