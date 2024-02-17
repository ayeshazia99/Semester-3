#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *front;
node *rear;
node(){
	front=NULL;
	rear=NULL;
	next=NULL;
	data=0;
}

void AddMember(int value){
	node *temp=new node();
	if(rear==NULL){
		rear=temp;
		rear->data=value;
		front=rear;
	}
	else{
		rear->next=temp;
		temp->data=value;
		rear=temp;
	}
}
int RemoveMember(){
	node *temp=front;
	if(front==NULL){
		cout<<"Queue Underflow!";
	}
	else{
	int x=temp->data;
	front=temp->next;	
		return x;
	}}
};
int main(){
	node n1;
	int x;
for(int i=0;i<5;i++){
		cin>>x;
		n1.AddMember(x);
		cout<<"Value added in linked list successfully!"<<endl;
	}
	for(int i=0;i<5;i++){
		cout<<"Value "<<i<<" Removed from linked list:"<<n1.RemoveMember()<<endl;

}}
