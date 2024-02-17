#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left,*right;
	node* adddata(int d){
		node *temp=new node;
		temp->data=d;
		temp->left=temp->right=NULL;
	}
	node *insert(node *root, int key){
		if(root==NULL){
			return adddata(key);
		}
		if(key<root->data)
		root->left=insert(root->left,key);
		else
		root->right=insert(root->right,key);
	//	return root;		
	}
	void inorder(node *root){
		if(root==NULL)
		return;
		inorder(root->left);
		cout<<root->data<" ";
		inorder(root->right);
	}
	node *successor(node *root){
		node *temp=root;
		while(temp &&temp->left!=NULL)
			temp=temp->left;
		return temp;
	}
	node *deletenode(node *root,int key){
		if(root==NULL)
		return root;
		if(key<root->data)
		root->left=deletenode(root->left,key);
		else if(key>root->data)
		root->right=deletenode(root->right,key);
		else{
			if(root->left==NULL){  //one child
				node *temp=root->right;
				delete root;
				return temp;
			}
			if(root->right==NULL){
				node *temp=root->left;
				delete root;
				return temp;
			}
		
		//two children
		node *temp=successor(root->right);
		root->data=temp->data;
		delete temp;
	}
	return root;
	}
	node *search(node *root,int key){
		if (root == NULL || root->data == key)
       return root;
		
		if(key<root->data)
		return search(root->left,key);
		if(key>root->data)
		return search(root->right,key);
	}
};
int main(){
	node n;
	node *root=n.adddata(8);
	n.insert(root,3);
	n.insert(root,1);
	n.insert(root,6);
	n.insert(root,7);
	n.insert(root,10);
	n.insert(root,14);
	n.insert(root,4);
	n.inorder(root);
	cout<<endl;
	if(n.deletenode(root,11)){
		cout<<"Found";
	}
	else 
	cout<<"Not found";
}
