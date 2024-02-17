#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *prev;
node(){

}
node(int data1){
data=data1;
next=NULL;
prev=NULL;
}
};
class LinkedList{
public:
node *head;
LinkedList(){
head=NULL;
}
LinkedList(node *n){
head=n;
}
int add_end(int x){
node *n=new node;
n->data=x;
node *temp;
temp=head;
if(head==NULL){
head=temp;
}
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=n;
n->prev=temp->next;
n->next=NULL;
}
int add_begin(int x){
node *temp=new node;
temp->data=x;
  temp->next=head;
  temp->prev=NULL;
  head->prev=temp->next;
  head=temp;
}
int add_between(int place,int element){
int i;
node *temp=head;
node *n=new node;
n->data=element;
n->next=NULL;
n->prev=NULL;
for(i=0;i<place;i++){
if(temp!=NULL)
temp=temp->next;
}
if(temp!=NULL){
n->next=temp->next;
n->prev=temp;
temp->next=n;
if(n->next!=NULL){
n->next->prev=n;
}
}
}
int delete_any(int p){
if(p<1){
	cout<<"Error";
}
if(p==1){
node *n;
n=head;
head=head->next;
delete n;
}
else{
node *pre=new node;
node *curr=new node;
curr=head;
pre=NULL;
for(int i=1;i<p;i++){
pre=curr;
curr=curr->next;
}
pre->next=curr->next;
curr->next->prev=pre;
delete curr;
}
}

int display(){
node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
};
int main(){
node n1(8);
LinkedList l1(&n1);
l1.add_end(5);
l1.add_end(6);
l1.add_end(7);
l1.add_begin(1);
l1.add_between(2,9);
//l1.delete_any(2);
cout<<"The doubly linked list is:";
l1.display();
}

