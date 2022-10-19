// Java program for preorder tree traversals

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

public class PreorderTraversal {
    // Root of Binary Tree
    Node root;

    PreorderTraversal() {
        root = null;
    }

    /* Given a binary tree, print its nodes in preorder */
    void printPreorder(Node node) {
        if (node == null)
            return;
        /* first print the data of node */
        System.out.print(node.key + " ");
        /* then recur on left child */
        printPreorder(node.left);
        /* now recur on right child */
        printPreorder(node.right);
    }

    // Wrappers over above recursive functions
    void printPreorder() {
        printPreorder(root);
    }

    // Driver code
    public static void main(String[] args) {
        PreorderTraversal tree = new PreorderTraversal();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        // Function call
        System.out.println(
                "\nPreorder traversal of binary tree is ");
        tree.printPreorder();
    }
}