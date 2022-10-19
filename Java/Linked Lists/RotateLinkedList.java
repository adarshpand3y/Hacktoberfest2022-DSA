//Java program for rotating a linked list
class LinkedList 
{
    // Head of list
    Node head; 
    // Linked list Node
    class Node 
    {
        int data;
        Node next;
        Node(int d)
        {
            data = d;
            next = null;
        }
    }
    /* This function rotates a linked list counter-clockwise and updates the head. The function assumes that k is smaller than size of linked list. It doesn't modify the list if k is greater than or equal to size*/
    void rotate(int k)
    {
        if (k == 0)
            return;
        Node current = head;
        int count = 1;
        while (count < k && current != null) 
        {
            current = current.next;
            count++;
        }
        if (current == null)
            return;
        Node kthNode = current;
        while (current.next != null)
            current = current.next;
        current.next = head;
        head = kthNode.next;
        kthNode.next = null;
    }
    void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    void printList()
    {
        Node temp = head;
        while (temp != null) 
        {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    // Driver code
    public static void main(String args[])
    {
        LinkedList llist = new LinkedList();

        // Create a list 
        // 10->20->30->40->50->60
        for (int i = 60; i >= 10; i -= 10)
            llist.push(i);
        System.out.println(
               "Given list");
        llist.printList();
        llist.rotate(4);
        System.out.println("Rotated Linked List");
        llist.printList();
    }
}
