class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        total = 0
        current = ListNode(0)
        result = current
        while l1 or l2:
            if l1:
                total += l1.val
                l1 = l1.next
            if (l2):
                total += l2.val
                l2 = l2.next
            current.next = ListNode(total % 10)
            current = current.next
            total = 1 if total > 9 else 0
        if total:
            current.next = ListNode(total)
        return result.next
