/* C++ program to construct tree
from inorder traversal */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data,
pointer to left child and
a pointer to right child */
class node
{
	public:
	int data;
	node* left;
	node* right;
};

/* Prototypes of a utility function to get the maximum
value in inorder[start..end] */
int max(int inorder[], int strt, int end);

/* A utility function to allocate memory for a node */
node* newNode(int data);

/* Recursive function to construct binary of size len from
Inorder traversal inorder[]. Initial values of start and end
should be 0 and len -1. */
node* buildTree (int inorder[], int start, int end)
{
	if (start > end)
		return NULL;

	/* Find index of the maximum element from Binary Tree */
	int i = max (inorder, start, end);

	/* Pick the maximum value and make it root */
	node *root = newNode(inorder[i]);

	/* If this is the only element in inorder[start..end],
	then return it */
	if (start == end)
		return root;

	/* Using index in Inorder traversal, construct left and
	right subtress */
	root->left = buildTree (inorder, start, i - 1);
	root->right = buildTree (inorder, i + 1, end);

	return root;
}

/* UTILITY FUNCTIONS */
/* Function to find index of the maximum value in arr[start...end] */
int max (int arr[], int strt, int end)
{
	int i, max = arr[strt], maxind = strt;
	for(i = strt + 1; i <= end; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			maxind = i;
		}
	}
	return maxind;
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode (int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return Node;
}

/* This function is here just to test buildTree() */
void printInorder (node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder (node->left);

	/* then print the data of node */
	cout<<node->data<<" ";

	/* now recur on right child */
	printInorder (node->right);
}

/* Driver code*/
int main()
{
	/* Assume that inorder traversal of following tree is given
		40
		/ \
		10 30
		/	 \
		5	 28 */

	int inorder[] = {5, 10, 40, 30, 28};
	int len = sizeof(inorder)/sizeof(inorder[0]);
	node *root = buildTree(inorder, 0, len - 1);

	/* Let us test the built tree by printing Inorder traversal */
	cout << "Inorder traversal of the constructed tree is \n";
	printInorder(root);
	return 0;
}


