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
node(const int data1){
data=data1;
next=NULL;
}
};
class LinkedList{
public:
node *head;
node *tail;
LinkedList(){
head=NULL;
}
LinkedList(node *n){
head=n;
tail=n;
}
int add_end(int x){
node *temp=new node; 
temp->data=x;
temp->next=NULL;
if(head==NULL){
head=temp;
tail=temp;
}
else{
	if(tail!=NULL){
	tail->next=new node(x);
	tail=tail->next;
	}
}
}
int add_begin(int x){
node *temp=new node; 
if(head==NULL){
head=temp;
tail=temp;
}
else{
  temp->data=x;
  temp->next=head;
  head=temp;
	}
}
int add_between(int place,int element){
int i;
node *previous=new node;
node *current=new node;
node *added=new node;
added->data=element;
added->next=NULL;
current=head;
for(i=1;i<place;i++){
previous=current;
current=current->next;
}
previous->next=added;
added->next=current;
}
int del_last(){ 
node *n;
node *prev;
n=head;
while(n->next!=NULL){
prev=n;
n=n->next;
}
prev->next=NULL;
delete n;
}
int update(int p,int element){
node *temp;
int i;
temp=head;
for(i=0;i<p;i++){
temp=temp->next;
}	
temp->data=element;
}
int delete_any(int p){ 
node *prev;
node *curr;
curr=head;
int i;
for(i=0;i<p;i++){
prev=curr;
curr=curr->next;
}
prev->next=curr->next;
delete curr;
}
int func2(){
node *n;
node *n1;
n=head;
while(n!=NULL){
if(n->data%2==0){
cout<<n->data<<" ";
}
n=n->next;
}
n1=head;
while(n1!=NULL){
if(n1->data%2!=0){
cout<<n1->data<<" ";
}
n1=n1->next;
}
}
int display(){
node *n;
n=head;
while(n!=NULL){
cout<<n->data<<" ";
n=n->next;
}
}
};
int main(){
int x,y;
node n1(12);
LinkedList l1(&n1);
l1.add_begin(8);
l1.add_begin(15);
l1.add_begin(17);
l1.add_end(10);
l1.add_end(5);
l1.add_end(4);
l1.add_end(1);
l1.add_end(7);
l1.add_end(6);
//l1.add_between(4,10);
//l1.add_between(5,5);
//l1.del_last();
//l1.delete_any(3);
//l1.update(3,9);
cout<<"The given linked list is:"<<endl;
l1.display();
cout<<endl<<endl;
cout<<"(Task 7)The sorted linked list is:"<<endl;
l1.func2();
}
