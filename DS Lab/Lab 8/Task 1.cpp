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
int isBSTUtil(node* node, int min, int max);
int isBST(node* node) 
{ 
    return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 
int isBSTUtil(node* node, int min, int max) 
{ 

    if (node==NULL) 
        return 1; 

    if (node->data < min || node->data > max) 
        return 0; 
    return
        isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max); 
} 

int main() 
{ 
    node *root = new node(4); 
    root->right = new node(6); 
    root->left = new node(2); 
    root->left->right = new node(3); 
    root->left->left = new node(1); 
    
    if(isBST(root)) 
        cout<<"It is a BST"<<endl<<"Points Assigned:10"; 
    else
        cout<<"It is not a BST"<<endl<<"Points Assigned:0"; 
        
    return 0; 
} 


