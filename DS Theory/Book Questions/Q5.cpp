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
int add_end(int d){
Node *p=new Node;
p->data=d;
Node *temp=new Node;
p->next=NULL;
temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=p;
}
int delete_any(int p){
Node *prev;
Node *curr; 
curr=head;
for(int i=0;i<p;i++){
prev=curr;
curr=curr->next;
}
prev->next=curr->next;
delete curr;
}
};
int main(){
SLL L1;
L1.add_end(1);
L1.traverse();
}
