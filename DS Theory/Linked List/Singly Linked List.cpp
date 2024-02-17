#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(const int data){ //if data is passed
this->data=data;
this->next=NULL;
}
Node(){ //if no node exists
this->data=0;
                                                                                                               
this->next=NULL;
}
};
class LinkedList{
public:
Node *head;
Node *tail;
LinkedList(){
this->head=NULL;
this->tail=NULL;
}
LinkedList(Node *n){
head=n;
tail=n;
}
int display(){ //display the nodes(traversal)
Node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data<<endl;
temp=temp->next;
}
}
int insert_begin(const int d){ //insert at beginning 
Node *n=new Node;
n->data=d;
n->next=head;
head=n;
}

int insert_end(const int d){ //insert at end
Node *n=new Node;             
n->data=d;
n->next=NULL;
if(head==NULL){
head=n;
tail=n;
}
else{
tail->next=n;
tail=tail->next;
}
}
int insert_any(int p,int d){ //insert anywhere
Node *n;
Node *curr;
Node *prev;
int i;
n->data=d;
n->next=NULL;
for(i=0;i<p;i++){
prev=curr;
curr=curr->next;
}
prev->next=n;
n->next=curr;
}
int delete_begin(){  //delete from beginning
Node *n;
n=head;
head=head->next;
delete n;
}
int delete_end(){ //delete from end
Node *n=new Node; 
Node *prev=new Node;
n=head;
while(n->next!=NULL){
prev=n;
n=n->next;
}
prev->next=NULL;
delete n;
}
int delete_any(int p){ //delete from any position
Node *prev;
Node *curr;
curr=head;
int i;
for(i=0;i<p;i++){
prev=curr;
curr=curr->next;
}
prev->next=curr->next;
delete curr;
}
void sort(){ //sort a linked list 
Node *index;
Node *temp;
temp=head;
int temp1;
if(head==NULL){
return;
}
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
void reverse(){ //reverse linked list with iteration 
Node *curr;
Node *next=NULL;
Node *prev=NULL;
curr=head;
while(curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
head=prev;
}
};
int main(){
LinkedList l;
l.insert_begin(5);
l.insert_begin(2);
l.insert_begin(9);
l.insert_end(4);
l.display();
//l.sort();
l.reverse();
l.display();

}
