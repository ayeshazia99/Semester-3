#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(){
this->data=0;
this->next=NULL;
}
Node(const int n){
this->data=n;
this->next=NULL;
}
};
class SLL{
public:
Node *head,*tail;
SLL(){
head=NULL;
tail=NULL;
}
SLL(Node *n){
head=n;
tail=n;
}
int traverse(){
Node *n;
n=head;
while(n!=NULL){
cout<<n->data;
n=n->next;
}
}
int add_begin(int data){
Node *n=new Node;
n->data=data;
n->next=head;
head=n;
}
int sort(){
Node *temp,*index;
int temp1;
temp=head;
while(temp!=NULL){
index=temp->next;
while(index!=NULL){
if(temp->data>index->data){
temp1=temp->data;
temp->data=index->data;
index->data=temp1;
}
index=index->next;
}
temp=temp->next;
}
}
SLL(const SLL &rhs){ //copy constructor
this->head=NULL;
this->tail=NULL;
Node *q=rhs.head;
while(q!=NULL){
add_begin(q->data);
q=q->next;
}
}
void merge(SLL l1, SLL l2){
Node *next,*previous,*ptr1,*ptr2;
int data;
ptr1=l1.head;
ptr2=l2.head;
head=ptr1=ptr2=NULL;
while(ptr1!=NULL && ptr2!=NULL){
data=ptr1->data;
ptr1=ptr1->next;
}
}
};
int main(){
SLL l1;
SLL l2;
SLL l3;
l1.add_begin(9);
l1.add_begin(3);
l1.add_begin(2);
l1.add_begin(8);
l2.add_begin(1);
l2.add_begin(6);
l2.add_begin(0);
l2.add_begin(7);
l1.sort();
l1.traverse();
cout<<endl;
l2.sort();
l2.traverse();
l3.merge(l1,l2);
}
