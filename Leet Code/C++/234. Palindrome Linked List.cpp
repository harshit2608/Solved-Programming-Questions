//TODO:
/**
 * Idea is to use slow and fast approach(floyd) to find the middle of the linked list and then reverse the linked list
 * starting from the middle element and then compare the linked list from start and with middle elemen(i.e the starting)
 * of the reveresed linked list.
 * if the data at the gien position is not same we return false
*/

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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head, *prev = nullptr, *next = nullptr;
        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while (fast->next != nullptr and fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *rev = reverseList(slow->next);

        slow = head;
        while (rev != nullptr)
        {
            if (rev->val != slow->val)
            {
                return false;
            }
            rev = rev->next;
            slow = slow->next;
        }
        return true;
    }
};