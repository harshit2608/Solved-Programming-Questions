/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *prev = NULL, *tmp = head;

        while (head)
        {
            if (head->val != val)
            {
                prev = head;
            }
            else
            {
                if (prev != NULL)
                {
                    prev->next = head->next;
                }
                else
                {
                    tmp = head->next;
                }
            }
            head = head->next;
        }
        return tmp;
    }
};