#include<iostream>
using namespace std;
class node 
{ 
    public:
    int data; 
    node *right; 
    node *left;
    node(int d)
    {
    data=d;
    right=NULL;
    left=NULL;
    }

};
class BinaryTree{
	private:
		node *root;
		public:
node* addnode(node *root,int data1){
   	if(root==NULL){
   		return new node(data1);
	   }
				if(data1<root->data){
					root->left=addnode(root->left,data1);
				}
				else{
					root->right=addnode(root->right,data1); 
				}
				return root;
			}
	void display(node *root){
		if(root==NULL){
			return;
		}
		display(root->left);
		cout<<root->data<<" ";
		display(root->right);
	}
};
int main(){
	BinaryTree b;
	node *root=NULL;
	int arr[7]={ 15, 10, 20, 8, 12, 16, 25 };
	for(int i=0;i<7;i++){
		root=b.addnode(root,arr[i]);
}
cout<<"Array data passed to BST:";
b.display(root);
}
