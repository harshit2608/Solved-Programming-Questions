bool isCircular(Node *head)
{
    if (head == nullptr)
    {
        return true;
    }
    Node *temp = head;
    while (temp->next != head and temp->next != nullptr)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        return false;
    }
    return true;
}