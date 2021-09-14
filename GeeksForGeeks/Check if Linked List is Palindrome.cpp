class Solution
{
public:
    //Function to check whether the list is palindrome.
    Node *reverse(Node *root)
    {
        Node *prev = nullptr, *forw = root, *curr = root;
        while (curr != nullptr)
        {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        Node *fast = head, *slow = head;
        while (fast != nullptr and fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        Node *rev = reverse(slow);
        slow = head;
        while (slow != nullptr and rev != nullptr)
        {
            if (slow->data != rev->data)
            {
                return false;
            }
            slow = slow->next;
            rev = rev->next;
        }
        return true;
    }
};