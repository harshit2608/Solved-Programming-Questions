Node *removeDuplicates(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    //Node* curr = head;
    while (temp->next != nullptr)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
            //delete temp;
        }
        else
        {
            temp = temp->next;
        }
        //curr=curr->next;
    }

    return head;
}