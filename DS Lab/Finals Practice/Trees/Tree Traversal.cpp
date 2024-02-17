// C++ program for different tree traversals
#include <iostream>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
class Node {
	public:
	int data;
	Node *left, *right;


//Utility function to create a new tree node
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(Node* node)
{
	if (node == NULL)
		return;

	// first recur on left subtree
	printPostorder(node->left);

	// then recur on right subtree
	printPostorder(node->right);

	// now deal with the node
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder( Node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	cout << node->data << " ";

	/* now recur on right child */
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(Node* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left subtree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}
};
/* Driver program to test above functions*/
int main()
{
	Node n;
	Node*root = n.newNode(1);

	root->left = n.newNode(2);
	root->right = n.newNode(3);
	root->left->left = n.newNode(4);
	root->left->right = n.newNode(5);
    root->right->left = n.newNode(6);
    root->right->right = n.newNode(7);
	cout << "\nPreorder traversal of binary tree is \n";
	n.printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	n.printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	n.printPostorder(root);

	return 0;
}

