/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode *A, int B)
{
    int count = 0;
    ListNode *temp = A;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    int mid = count / 2 + 1;

    int start = mid - B;
    temp = A;

    if (start <= 0)
    {
        return -1;
    }

    for (int i = 0; i < start - 1; i++)
    {
        temp = temp->next;
    }

    return temp->val;
}
