class DoublyNode:
    def __init__(self,val,next=None,prev=None):
        self.val=val
        self.next = next
        self.prev = prev
    
    def __str__(self):
        return str(self.val)

head = tail = DoublyNode(1)
    
def display(head):
        curr = head 
        elements=[]
        while curr:
            elements.append(str(curr.val))
            curr = curr.next
        print("<->".join(elements)) 

display(head)

def Insert_At_Beginning(head,tail,val):
     newNode = DoublyNode(val,next=head)
     head.prev=newNode
     return newNode,tail  
head,tail = Insert_At_Beginning(head,tail,4)
# display(head)

def Insert_At_End(head,tail,val):
     newNode = DoublyNode(val,prev=head)
     tail.next=newNode
     return head,newNode
head,tail = Insert_At_End(head,tail,5)

display(head)           