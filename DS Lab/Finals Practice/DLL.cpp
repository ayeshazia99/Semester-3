#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *prev;
node(){
data=0;
next=prev=NULL;
}
node(int d){
data=d;
next=prev=NULL;
}
};
class SLL{
public:
node *head;
SLL(){
head=NULL;
}
SLL(node *n){
head=n;
}
void insert_begin(int d){
node *temp1=new node;
if(head==NULL){
head=temp1;
head->data=d;
}
else{
node *temp=new node;
temp->data=d;
temp->next=head;
head->prev=temp;
temp->prev=NULL;
head=temp;
}}
void insert_end(int d){
node *n=new node;
n->data=d;
node *p=head;
while(p->next!=NULL){
	p=p->next;
}
p->next=n;
n->prev=p;
n->next=NULL;
}
	void insert_any(int x,int p){
		node *temp=head;
		node *n=new node;
		for(int i=0;i<p;i++){
		temp=temp->next;	
		}
		n->next=temp->next;
		temp->next=n;
		n->prev=temp;
		temp->next->prev=n;
	}
void remove_start(){
node *temp;
temp=head;
head=temp->next;
head->prev=NULL;
delete temp;
}
void remove_end(){
node *temp=head;
node *prev;
while(temp->next!=	NULL){
	prev=temp;
	temp=temp->next;
}
prev->next=NULL;
delete temp; 
}
void remove_any(int p){
node *temp=head;

for(int i=0;i<p;i++){
	temp=temp->next;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
delete temp; 
}
void reverse(){
node *prev=NULL;
node *next=NULL;
node *curr=head;
while (curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
head=prev;
}
void sort(){
node *n;
node *temp=head;
while(temp!=NULL){
n=temp->next;
while(n!=NULL){
if(temp->data>n->data){
swap(temp->data,n->data);
}
n=n->next;
}
temp=temp->next;
}
}
void oddeven(){
	node *temp=head;
	node *temp1=head;
	int count=0,count1=0;
	while(temp1!=NULL){
		temp1=temp1->next->next;
		count++;
	}
	while(temp!=NULL){
		temp=temp->next;
		count1++;
	}
	cout<<endl<<count<<endl<<count1;
}
void display(){
node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}
}
void count(){ //count number of nodes 
node *temp;
temp=head;
int count;
while(temp!=NULL){
count++;
temp=temp->next;
}
cout<<count;
}
};
int main(){
SLL s1; 
s1.insert_begin(6);
s1.display();
cout<<endl;
s1.insert_end(2);
s1.insert_any(2,1);
s1.display();
cout<<endl;
s1.remove_start();
//s1.sort();
s1.display();
//s1.oddeven();
}
