#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
	node* addnode(int d){
		node *temp=new node;
		temp->data=d;
		temp->left=temp->right=NULL;
		return temp;
	}
	bool isbinarytree(node *root){
		if(root==NULL)
		return true;
		if(root->left==NULL && root->right==NULL)
		return true;
		if((root->left) && (root->right))
			return(isbinarytree(root->left) && isbinarytree(root->right));
			
		return false;
	}
};
int main(){
	node n;
	node *root=n.addnode(1);
	root->left=n.addnode(2);
	root->right=n.addnode(3);
	root->left->left=n.addnode(5);
	if(n.isbinarytree(root))
	cout<<"It is complete binary tree!";
	else
	cout<<"It is not a complete binary tree!";
}
