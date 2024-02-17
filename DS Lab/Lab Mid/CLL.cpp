#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
	
node(){
	data=0;
	next=NULL;
}
node(int d){
	data=d;
	next=NULL;
}
};
class CLL{
	public:
	node *head;
	node *tail;
	CLL(){
		head=tail=NULL;
	}

void insert_begin(int d){
	node *temp=new node;
	temp->data=d;
	if(head==NULL){
		head=tail=temp;
		temp->next=head;
	}
	else{
	temp->next=head;
		tail->next=temp;
		head=temp;
	}

}
void insert_end(int d){
	node *temp=tail;
	node *n=new node;
	n->data=d;
	temp->next=n; 
	n->next=head;
}
void insert_any(int p,int d){
	node *temp;
	node *n=new node;
	n->data=d;
	temp=head;
	for(int i=0;i<p;i++){
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}
void remove_start(){
node *temp=head;
head=head->next;
tail->next=head;
delete temp;
	
}
void remove_end(){
	node *temp=head;
	node *n;
	while(temp->next!=head){
		n=temp;
		temp=temp->next;
	}
	tail=n;
	tail->next=head;
	delete temp;
}
void remove_any(int p){ //**important**
	node *n;
	node *temp=head;
	for(int i=0;i<p;i++){
		n=temp;
		temp=temp->next;
	}
	n->next=temp->next;
	delete temp;
}
void reverse(){
node *prev=NULL;
node *next;
node *curr=head;
do{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}while(curr!=head);
head->next=prev;
head=prev;
}
void display(){
	node *temp;
	temp=head;
	while(temp->next!=head){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<temp->data;
}
};
int main(){
	CLL c1;
	c1.insert_begin(9);
	c1.insert_begin(6);
	c1.insert_end(7);
	c1.insert_end(8);
	c1.insert_any(2,3);
	c1.display();
	c1.remove_start();
	cout<<endl;
	c1.display();

}
