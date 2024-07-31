class Linked_Node:
    # Taking input for linked list node
    def __init__(self, val,next=None):
        self.val=val
        self.next=next
# Converting inputinto string
    def __str__(self):
        return str(self.val)   

 #Setting up the value 
Head=Linked_Node(1)
A = Linked_Node(2)
B=Linked_Node(3)
C=Linked_Node(4)
D=Linked_Node(5)

# Joining the list
Head.next=A
A.next=B
B.next=C
C.next=D

#Displaying the list - O(n)
def display(head):
    curr = head
    elements=[]
    while curr:
     elements.append(str(curr.val))
     curr=curr.next
    print("->".join(elements))
display(Head)     

# Searching for element -O(n)

def Search(head,val):
   curr = head
   while curr:
      if val == curr.val:
         return True
      curr = curr.next
   return False  
Search(Head,2)
