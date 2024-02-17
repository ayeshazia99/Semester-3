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
temp1->data=d;
if(head==NULL){
head=temp1;
}
else{
temp1->next=head;
head=temp1;
}}
void insert_end(int d){
node *n=new node;
node *temp;
n->data=d;
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=n;
n->next=NULL;
}
	void insert_any(int x,int p){
		node *temp=new node;
		temp->data=x;
		node *curr=head;
		node *prev;
		for(int i=0;i<p;i++){
			curr=curr->next;
		}
		temp->next=curr->next;
		curr->next=temp;
	}
void remove_start(){
node *temp;
temp=head;
head=temp->next;
delete temp;
}
void remove_end(){
node *temp;
node *n;
temp=head;
while(temp->next!=NULL){
n=temp;
temp=temp->next;
}
n->next=NULL;
delete temp;
}
void remove_any(int p){
node *temp;
node *n;
temp=head;
for(int i=0;i<p;i++){
n=temp;
temp=temp->next;
}
n->next=temp->next;
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
s1.insert_end(7);
s1.insert_any(2,1);
s1.display();
cout<<endl;
s1.remove_start();
//s1.sort();
s1.display();
//s1.oddeven();
}
