void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *fast = head, *slow = head;
    if (head == nullptr)
    {
        return;
    }
    while (fast->next != head and fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    *head1_ref = head;
    *head2_ref = slow->next;

    slow->next = head;
    Node *temp = *head2_ref;
    while (temp->next != head)
    {
        temp = temp->next;
    };
    temp->next = *head2_ref;
}