class Solution:
    #Function to remove duplicates from unsorted linked list.
    def removeDuplicates(self, head):
        # code here
        # return head after editing list
        if head == None:
            return None
        elif head.next == None:
            return head
        else:
            arr = set()
            temp = head
            while head and head.next:
                arr.add(head.data)
                if head.next.data in arr:
                    m = head.next.next
                    head.next = m
                else:
                    arr.add(head.next.data)
                    head = head.next
        return temp