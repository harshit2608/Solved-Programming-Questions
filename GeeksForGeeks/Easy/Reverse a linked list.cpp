class Solution
{
public:
    //Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        if (head->next == nullptr)
        {
            return head;
        }
        Node *temp = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return temp;
    }
};