

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(head!=0)
    {
        SinglyLinkedListNode* temp;
        temp=head;
        while(temp!=0)
        {
           cout<<temp->data<<endl;
           temp=temp->next;
        }
    }
}
