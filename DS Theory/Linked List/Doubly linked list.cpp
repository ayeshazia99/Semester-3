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
}
node(int data1){
data=data1;
next=NULL;
prev=NULL;
}
node(int data1, node *p, node *n){
data=data1;
next=n;
prev=p;
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
for(i=1;i<place;i++){
temp=temp->next;
}
n->prev=temp->next;
n->next=temp->next;
temp->next=n->prev;
temp->next=n->next;
}
int display(){
node *temp;
while(temp->next!=NULL){
cout<<temp->data;
temp=temp->next;
}
}
};
int main(){
int x,y;
node n1(5);
LinkedList l1(&n1);
//l1.add_end(5);
//l1.add_end(6);
//l1.add_end(7);
//l1.add_begin(1);
//l1.add_between(2,5);
l1.display();
}

