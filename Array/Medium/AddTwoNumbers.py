class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self,l1:ListNode,l2:ListNode)->ListNode:
        # Making Dummy Node so that we do not directly change the List

        dummy = ListNode()
        curr = dummy
        carry = 0 

    # While l1 is non zero or l2 is non zero or carry is non zero

        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

    # Performing the addition

            value = v1+v2+carry

            # Carry = value // 10 for getting 10s place in carry

            carry = value // 10

            # Value = value % 10 for getting ones place in the value to store it in list node

            value = value % 10

            # Setting value as listNode

            curr.next = ListNode(value)

            # Updating the pointers

            curr = curr.next
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

            # Displaying the list
            
        return dummy.next    
# LeetCOde Makes test cases on its own I am doung this to take my own testcases

ListNode1 = ListNode(2,ListNode(4,ListNode(3,None)))
ListNode2 = ListNode(5,ListNode(6,ListNode(4,None)))
result =Solution().addTwoNumbers(ListNode1,ListNode2)

# Displaying the list
output=[]
while result:
    output.append(result.val)
    result = result.next

print("->".join(map(str,output)))

#Giving output - 7->0->8