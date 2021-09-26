class Solution
{
public:
    Node *divide(int N, Node *head)
    {
        Node *even = nullptr, *odd = nullptr, *es = nullptr, *os = nullptr;

        Node *ptr = head;

        while (ptr)
        {
            if (ptr->data % 2 == 0)
            {
                if (even == nullptr)
                {
                    even = ptr;
                    es = ptr;
                }
                else
                {
                    even->next = ptr;
                    even = ptr;
                }
            }
            else
            {
                if (odd == nullptr)
                {
                    odd = ptr;
                    os = ptr;
                }
                else
                {
                    odd->next = ptr;
                    odd = ptr;
                }
            }
            ptr = ptr->next;
        }

        if (not es)
        {
            odd->next = nullptr;
            return os;
        }

        if (not os)
        {
            even->next = nullptr;
            return es;
        }

        even->next = os;
        odd->next = nullptr;

        return es;
    }
};