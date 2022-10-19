#include <bits/stdc++.h>

using namespace std;
class Treenode
{
public:
    int data;
    Treenode *left;
    Treenode *right;

    Treenode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// creating tree by recursion

Treenode *createTree(Treenode *root)
{
    int d;
    cout << "enter data" << endl;
    cin >> d;
    root = new Treenode(d);
    if (d == -1)
        return NULL;

    cout << "enter data for left" << endl;
    root->left = createTree(root->left);
    cout << "enter data for right" << endl;
    root->right = createTree(root->right);

    return root;
}
void inordertraversal(Treenode *root)
{
    if (root == NULL)
        return;
    if (root->left)
        inordertraversal(root->left);
    cout << root->data << " ";
    if (root->right)
        inordertraversal(root->right);
}

// Preorder Traversal of a Tree
void PreorderTraversal(Treenode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    if (root->left)
        PreorderTraversal(root->left);
    if (root->right)
        PreorderTraversal(root->right);
}

// Postorder Traversal of a Tree
void PostorderTraversal(Treenode *root)
{
    if (root == NULL)
        return;
    if (root->left)
        PostorderTraversal(root->left);
    if (root->right)
        PostorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Treenode *root = NULL;
    root = createTree(root);

    cout << "inordertraversal traversal is:" << endl;
    inordertraversal(root);

    cout << endl;
    cout << "Preorder Traversal :" << endl;
    PreorderTraversal(root);

    cout << endl;
    cout << "Preorder Traversal :" << endl;
    PostorderTraversal(root);
}
