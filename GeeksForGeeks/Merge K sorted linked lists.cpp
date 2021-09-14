class Solution
{
public:
    //Function to merge K sorted linked list.
    Node *mergeKLists(Node *a[], int K)
    {
        Node *ans = new Node(0);
        Node *head = ans;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < K; ++i)
        {
            Node *temp = a[i];
            while (temp != nullptr)
            {
                pq.push(temp->data);
                temp = temp->next;
            }
        }

        while (!pq.empty())
        {
            Node *temp = new Node(pq.top());
            pq.pop();
            ans->next = temp;
            ans = ans->next;
        }
        return head->next;
    }
};