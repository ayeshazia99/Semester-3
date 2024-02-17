#include<queue>
#include<iostream>

using namespace std;

class node{
	public:
	int data;
	node *right;
	node *left;
	node (int val){
		data=val;
		right=NULL;
		left=NULL;
	}
};

node * insert( node* root, int val){
	if(root ==NULL){
		return new node(val);
	}
	if(val< root -> data){
		root->left = insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}
	return root;
}
void levelorder(node * root){
	if(root==NULL){
		return;
	}
	int max=0;
	int min=1000;
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node * temp=q.front();
		q.pop();
		if(temp !=NULL){
			if(temp->data > max){
				max = temp->data;
			}
			if(temp->data < min){
				min = temp->data;
			}
		   if(temp->left!=NULL){
			q.push(temp-> left);
		    }   
		  if(temp->right != NULL){
			q.push(temp->right);
		   }   
			
		}
		if(temp == NULL){
			cout<<min<<" "<<max<<endl;
			
			if(!q.empty()){
				q.push(NULL);
			}
		}
	
		
	}

}

int main(){
	node * root= NULL;
	int x;
	cin>>x;

	for(int i =0;i<x;i++){
	  int y;
	  cin>>y;
	  root= insert(root,y);
		
	}
	
	levelorder(root);
	
}
