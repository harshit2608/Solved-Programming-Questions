class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        if (head == nullptr)
        {
            return head;
        }
        node *prev = nullptr, *curr = head, *next = nullptr;
        int count = 0;
        while (count < k && curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (next != nullptr)
        {
            node *res = reverse(next, k);
            head->next = res;
        }
        return prev;
    }
};