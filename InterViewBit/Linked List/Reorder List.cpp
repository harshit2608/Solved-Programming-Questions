ListNode *Solution::reorderList(ListNode *A)
{
    if (A == NULL || A->next == NULL)
        return A;
    if (A->next->next == NULL)
        return A;

    ListNode *slow = A, *fast = A;
    ListNode *trav, *curr, *prev;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    trav = slow->next, curr = slow->next, prev = slow;
    slow->next = NULL;
    while (trav != NULL)
    {
        if (trav->next == NULL)
        {
            trav->next = prev;
            break;
        }
        trav = trav->next;
        curr->next = prev;
        prev = curr;
        curr = trav;
    }

    prev = A;
    ListNode *temp1 = prev->next, *temp3 = trav->next;
    while (prev != slow && trav != slow)
    {
        prev->next = trav;
        trav->next = temp1;
        prev = temp1;
        trav = temp3;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }

    return A;
}