# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        previous, current , forward= None, head , None
        while current is not None:
            forward =  current.next
            current.next = previous
            previous = current
            current = forward
        return previous