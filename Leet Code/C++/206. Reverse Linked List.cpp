//TODO:
/**
 * Idea si to just traverse the list from forward direction and maintian thrre variaobles, prev, curr, next
 * prev and next will point to null and to staring element
 * example : -  orig 10 -> 20 -> 30 -> 40
 * ans      :        nullptr <- 10 <- 20 <- 30 <- 40
 * we assign current to previous ekement while raversing ahead   
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
};