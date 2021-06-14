class Solution
{
public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        if (head == NULL || head->next == NULL)
            return;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }

        if (slow == head)
        {
            while (slow->next != head)
            {
                slow = slow->next;
            }
            slow->next = NULL;
        }

        if (slow == fast)
        {
            slow = head;
            while (slow->next != fast->next)
            {
                if (slow == fast->next)
                {
                    fast->next == NULL;
                }
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = NULL;
        }
    }
};