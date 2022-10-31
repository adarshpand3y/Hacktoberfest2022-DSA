class ListNode:                               # Class used to create new node of desired value and its reference to the next Node
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class ReverseList:
    def __init__(self, head: ListNode):       # Constructor
        cur = head
        prev = None

        while cur:                            # Run until the last Node of the Linkedlist points to None
            temp = cur.next                   # Set the reference of the next node of the cur to temp variable
            cur.next = prev                   # Set the reference of the Prev to the next node of the cur variable
            cur, prev = temp, cur             # Swap the references of cur and prev

        print("\nLinked list after reversing: ")
        for i in range(n):                    # Print Reversed Linkedlist
            print(prev.val, end=" ")
            prev = prev.next


nodeElements = [10, 20, 30, 40, 50]           # Storing the element's in the form of list
n = len(nodeElements)
node = ListNode(nodeElements[0])              # Initializing the LinkedList as node
head = node

print("Linked list before reversing: ")       # Printing Original Linked list
print(head.val, end=" ")

for i in range(1, n):                         # Storing the elements present in the list to the Linkedlist
    head.next = ListNode(nodeElements[i])
    head = head.next
    print(head.val, end=" ")
                                              # Now the LinkedList is 10->20->30->40->50
reverse = ReverseList(node)                   # Making an object of the class to reverse the Linkedlist
