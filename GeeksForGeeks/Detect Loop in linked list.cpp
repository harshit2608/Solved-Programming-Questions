class Solution
{
public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node *head)
    {
        Node *slptr = head;
        Node *fstptr = head;
        while (fstptr != nullptr && fstptr->next != nullptr)
        {
            slptr = slptr->next;
            fstptr = fstptr->next->next;
            if (fstptr == slptr)
            {
                return true;
            }
        }
        return false;
    }
};