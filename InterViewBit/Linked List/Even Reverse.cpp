ListNode *revers(ListNode *head)
{
    ListNode *prev = NULL, *temp;
    while (head != NULL)
    {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}
ListNode *Solution::solve(ListNode *A)
{
    ListNode *odd = new ListNode(0), *even = new ListNode(0);
    ListNode *hodd = odd, *heven = even;
    ListNode *cur = A;
    int k = 1;
    while (cur != NULL)
    {
        if (k % 2)
        {
            odd->next = cur;
            odd = odd->next;
        }
        else
        {
            even->next = cur;
            even = even->next;
        }
        k++;
        cur = cur->next;
    }
    odd->next = even->next = NULL;
    heven = revers(heven->next);

    A = hodd->next;
    k = 1;
    cur = hodd;
    hodd = hodd->next;
    while (hodd != NULL || heven != NULL)
    {
        if (k % 2)
        {
            cur->next = hodd;
            hodd = hodd->next;
        }
        else
        {
            cur->next = heven;
            heven = heven->next;
        }
        k++;
        cur = cur->next;
    }
    return A;
}