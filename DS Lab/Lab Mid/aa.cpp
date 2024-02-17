#include <iostream>
using namespace std;
int i=0; //declaring i as a global variable to avoid re-declaration later in code
class node{ 
public:
int base;
char a;
int pow;
node *next;

node(int b,char c,int p){ //declaring components of the polynomial
	base=b;
	a=c;
	pow=p;
	next=NULL;
}
};
void reverse(node *&head){ //reverse the linked for display from high to low power
node *prev=NULL,*next=NULL,*curr;
curr=head;
while(curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next; 
}
head=prev;
}
void insert_begin(node*&head,int val, char c , int power ){ //insert the node at beginning of linked list
	node*n=new node(val,c,power);
	n->next=head;
	head=n;
}
void insert_end(node *& head,int val,char c,int power){ //insert the node at end of linked list
	node *temp=head;
	node *n=new node(val,c,power);
	if(head==NULL){
		head=n;	
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
}
void display(node *head){ //function to display the linked list
	reverse(head);
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->base<<" ";
		cout<<temp->a<<" ";
		cout<<temp->pow<<endl;
		temp=temp->next;
	}	
}
void addnode(node * head1, node* head2, node*& result){ //function to add the two polynomials through linked list
    node *n1=head1;
    node *n2=head2;
    node *ans=result;
    while(n1 !=NULL || n2 != NULL){
    	if((n1->pow==n2->pow) && (n1->a == n2->a)) //if powers and variable is same
		{
		insert_end(result,n1->base + n2->base,n1->a , n1->pow);
		n1=n1->next;
		n2=n2->next;
		i++;	
		}
		else if((n1->a == n2->a)&&(n1->pow >n2->pow)){ //if variables are same but power of first node>power of second node
			insert_end(result,n1->base,n1->a , n1->pow);
			n1=n1->next;
			i++;
		}
		else if ((n1->a == n2->a)&&(n1->pow <n2->pow)){ //if variables are same but power of first node<power of second node
			insert_end(result,n2->base,n2->a ,n2->pow);
			n2=n2->next;
			i++;
		}
		else  if(n1->a != n2->a){ //if the variables are different i.e: x,y
			insert_end(result,n1->base,n1->a,n1->pow);
			insert_begin(result,n2->base,n2->a,n2->pow);
			n1=n1->next;
			n2=n2->next;
			i++;
			i++;
		}
		else if(n1==NULL){ //if the linked list is empty 
			insert_end(result,n2->base,n2->a,n2->pow);
			n2=n2->next;
			i++;
		}
		else if(n2==NULL){
			insert_end(result,n1->base,n1->a,n1->pow);
			n1=n1->next;
			i++;
		}	
	}  
}
int main(){
node *n1=NULL;
node *n2=NULL;
node *result=NULL;
int x,y; 
int base,pow;
char a;
cin>>x;

for(int i=0;i<x;i++){
	cin>>base;
	cin>>a;
	cin>>pow;
	insert_end(n1,base,a,pow);
}

cin>>y;
for(int i=0;i<y;i++){
	cin>>base;
	cin>>a;
	cin>>pow;
	insert_end(n2,base,a,pow);
}
addnode(n1,n2,result);
if(x>y){
	cout<<x<<endl;
}
else{
	cout<<i<<endl;
}
display(result);
}
