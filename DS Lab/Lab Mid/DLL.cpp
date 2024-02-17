#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *prev;
node(){
data=0;
next=NULL;
prev=NULL;
}
node(int d){
data=d;
next=NULL;
prev=NULL;
}
};
class DLL{
public:
node *head;
DLL(){
head=NULL;
}
DLL(node *n){
head=n;
}
void insert_begin(int d){
if(head==NULL){
head=new node;
head->data=d;
}
else{
node *temp=new node;
temp->data=d;
temp->next=head;
temp->prev=NULL;
head->prev=temp;
head=temp;
}
}
void insert_end(int d){
node *temp=head;
node *n=new node;
n->data=d;
n->next=NULL;
while(temp->next!=NULL){
temp=temp->next;
}
n->prev=temp;
temp->next=n;
}
void insert_any(int p,int d){
node *n=new node;
node *temp=head;
n->data=d;
for(int i=0;i<p;i++){
temp=temp->next;
}
n->next=temp->next;
n->prev=temp;
temp->next->prev=n;
temp->next=n;
}
void remove_start(){
node *temp;
temp=head;
head=head->next;
head->prev=NULL;
delete temp;
}
void remove_end(){ //important!! need an extra node!!
node *temp;
temp=head;
node *n=temp;
while(temp->next!=NULL){
	n=temp;
	temp=temp->next;
}
n->next=NULL;
delete temp;
}
void remove_any(int p){
node *temp=head;
node *n;
for(int i=0;i<p;i++){
n=temp;
temp=temp->next;
}
n->next=temp->next;
temp->next->prev=n;
delete temp;
}
void reverse(){ //**important**
node *temp=NULL;
node *curr=head;
  while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;            
        curr = curr->prev;
    }
  if(temp != NULL )
        head = temp->prev;
}
void display(){
node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}
}
};
int main(){
DLL d1;

d1.insert_end(6);
d1.insert_end(5);
d1.display();

}
