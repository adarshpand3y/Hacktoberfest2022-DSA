// Java program for postorder tree traversals

/* Class containing left and right child of current
node and key value*/
class Node {
    int key;
    Node left, right;

    public Node(int item) {
        key = item;
        left = right = null;
    }
}

public class PostorderTraversal {
    // Root of Binary Tree
    Node root;

    PostorderTraversal() {
        root = null;
    }

    /* Given a binary tree, print its nodes in postorder */
    void printPostorder(Node node) {
        if (node == null)
            return;

        /* first recur on left child */
        printPostorder(node.left);
        /* now recur on right child */
        printPostorder(node.right);
        /* then print the data of node */
        System.out.print(node.key + " ");
    }

    // Wrappers over above recursive functions
    void printPostorder() {
        printPostorder(root);
    }

    // Driver code
    public static void main(String[] args) {
        PostorderTraversal tree = new PostorderTraversal();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        // Function call
        System.out.println(
                "\nPostorder traversal of binary tree is ");
        tree.printPostorder();
    }
}