// Checking if a binary tree is a complete binary tree in C++

#include <iostream>

using namespace std;

class Node{
	public:
	int data;
	Node *left,*right;
	Node* addnode(int d){
		Node *temp=new Node;
		temp->data=d;
		temp->left=temp->right=NULL;
		return temp;
	}

// Count the number of nodes
int countNumNodes(struct Node *root) {
  if (root == NULL)
    return (0);
  return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}

// Check if the tree is a complete binary tree
bool checkComplete(struct Node *root, int index, int numberNodes) {
  
  // Check if the tree is empty
  if (root == NULL)
    return true;

  if (index >= numberNodes)
    return false;

  return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}
};
int main() {
	Node n;
 Node* root = n.addnode(1);
  root->left = n.addnode(2);
  root->right = n.addnode(3);
//  root->left->left = n.addnode(4);
  root->left->right = n.addnode(5);
//  root->right->left = n.addnode(6);

  int node_count = n.countNumNodes(root);
  int index = 0;

  if (n.checkComplete(root, index, node_count))
    cout << "The tree is a complete binary tree\n";
  else
    cout << "The tree is not a complete binary tree\n";
}

