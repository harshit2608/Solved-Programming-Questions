class Solution
{
public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {

        int arr[3] = {};
        Node *i = head;
        while (i != nullptr)
        {
            arr[i->data]++;
            i = i->next;
        }
        i = head;
        while (arr[0]--)
        {
            head->data = 0;
            head = head->next;
        }
        while (arr[1]--)
        {
            head->data = 1;
            head = head->next;
        }
        while (arr[2]--)
        {
            head->data = 2;
            head = head->next;
        }
        return i;
    }
};