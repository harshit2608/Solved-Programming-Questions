class Solution
{
public:
    Node *copyList(Node *head)
    {
        // unordered_map<Node*,Node*> hash;
        // Node*curr = head;
        // while(curr!=nullptr)
        // {
        //     hash[curr] = new Node(curr->data);
        //     curr = curr->next;
        // }
        // curr = head;
        // while(curr!=nullptr)
        // {
        //     Node* temp = hash[curr];
        //     temp->next = hash[curr->next];
        //     temp->arb = hash[curr->arb];
        //     curr = curr->next;
        // }
        // return hash[head];

        Node *temp, *forw, *curr = head;
        while (curr != nullptr)
        {
            forw = curr->next;
            curr->next = new Node(curr->data);
            curr->next->next = forw;
            curr = forw;
        }

        curr = head;
        while (curr)
        {
            curr->next->arb = (curr->arb != nullptr) ? curr->arb->next : nullptr;
            curr = curr->next->next;
        }

        Node *orig = head, *copy = head->next;
        temp = copy;

        while (orig && copy)
        {
            orig->next = orig->next ? orig->next->next : orig->next;
            copy->next = copy->next ? copy->next->next : copy->next;
            orig = orig->next;
            copy = copy->next;
        }

        return temp;
    }
};