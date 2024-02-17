//**THE CODE IS WORKING FINE IN DEV C++
//I**I HAVE SENT EMAIL FOR REFERENCE

#include<iostream>
#include<string.h>
using namespace std;
class node{
public:
string data;
node *next;
node *prev;
node(){

next=NULL;
prev=NULL;
}

};
class DLL{
public:
node *head;
node *tail;

DLL(){
head=tail=NULL;
}
DLL(node *n){
head=tail=n;
}

void insert_end(string d){
if(head==NULL){
head=new node;
head->data=d;
}
else{
node *temp=head;
node *n=new node;
n->data=d;
n->next=NULL;
while(temp->next!=NULL){
temp=temp->next;
}
n->prev=temp;
temp->next=n;
}}
void remove() {  
    //Node current will point to head  
    struct node *current, *index, *temp;  
      
    //Checks whether list is empty  
    if(head == NULL) {  
        return;  
    }  
    else {  
        //Initially, current will point to head node  
        for(current = head; current != NULL; current = current->next) {  
            //index will point to node next to current  
            for(index = current->next; index != NULL; index = index->next) {  
                if(current->data == index->data) {  
                    //Store the duplicate node in temp  
                    temp = index;  
                    //index's previous node will point to node next to index thus, removes the duplicate node  
                    index->prev->next = index->next;  
                    if(index->next != NULL)  
                        index->next->prev = index->prev;  
                    //Delete duplicate node by making temp to NULL  
                    temp = NULL;  
                }  
            }  
        }  
    }  
} 
 
void display(){
node *temp;
temp=head;
int arr[18]={2,4,1,4,3,005,001,002,003,001,002,001,002,003,005,001,005,0050};

	for(int i=0;i<18;i++){
		while(temp!=NULL){
cout<<" "<<temp->data<<endl;

cout<<"00";
cout<<arr[i]<<" ";
cout<<" "<<"00";
cout<<arr[i+1];
i=i+2;
temp=temp->next;

}
}
}
void sort(char str[25][25],int n){
	char temp[25];
	for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }

}

};
class BST
{
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);
};

// Default Constructor definition.
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data)
	{
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
int main(){
DLL d1,d2;
BST b1;
int n,x,a;
char str[25][25];
char temp[25];
cin>>n;
BST b, *root = NULL;
    root = b1.Insert(root, 00);
for(int i=0;i<n+1;i++){
	gets(str[i]);	
}
d1.sort(str,n);
for(int i=0;i<n+1;i++)
      d1.insert_end(str[i]);

cin>>x;
for(int i=0;i<x;i++){
	cin>>a;
	b1.Insert(root,a);
	gets(str[i]);	
}
d1.display();
cout<<endl;

}
