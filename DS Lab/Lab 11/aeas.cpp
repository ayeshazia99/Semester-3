// C++ implementation to print largest  
// value in each level of Binary Tree 
#include <bits/stdc++.h> 
  
using namespace std; 
  
// structure of a node of binary tree 
struct Node { 
    int data; 
    Node *left, *right; 
}; 
  
// function to get a new node 
Node* newNode(int data) 
{ 
    // allocate space 
    Node* temp = new Node; 
  
    // put in the data 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
// function to print largest value 
// in each level of Binary Tree 
void largestValueInEachLevel(Node* root) 
{ 
    // if tree is empty 
    if (!root) 
        return; 
  
    queue<Node*> q; 
    int nc, max; 
  
    // push root to the queue 'q' 
    q.push(root); 
  
    while (1) { 
        // node count for the current level 
        nc = q.size(); 
  
        // if true then all the nodes of  
        // the tree have been traversed 
        if (nc == 0) 
            break; 
  
        // maximum element for the current  
        // level 
        max = INT_MIN; 
  
        while (nc--) { 
  
            // get the front element from 'q' 
            Node* front = q.front(); 
  
            // remove front element from 'q' 
            q.pop(); 
  
            // if true, then update 'max' 
            if (max < front->data) 
                max = front->data; 
  
            // if left child exists 
            if (front->left) 
                q.push(front->left); 
  
            // if right child exists 
            if (front->right) 
                q.push(front->right); 
        } 
  
        // print maximum element of  
        // current level 
        cout << max << " "; 
    } 
} 
  
// Driver program to test above 
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
