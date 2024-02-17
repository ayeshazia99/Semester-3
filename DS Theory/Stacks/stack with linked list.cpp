#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	node *top;
	int data;
	node(){
		next=NULL;
		top=NULL;
		data=0;
	}
void push(int x){
	node *temp=new node;
	if(!temp){
		cout<<"Stack Overflow";
	}
	temp->data=x;
	temp=temp->next;
	top=temp;
}	
int pop(){
	node *temp=top;
	if(top==NULL){
		cout<<"Stack Underflow!";
	}
	int x=temp->data;
	top=temp->next;
	return x;
}
int display(){
	node *temp=top;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int reverse(){
	node *prev=NULL;
	node *next=NULL;
	node *curr=top;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	top=prev;
}
};
int main(){
	node s;
	int x;
	for(int i=0;i<5;i++){
		cin>>x;
		s.push(x);
	}
	int arr[5];
	for(int i=1;i<=5;i++){
		cout<<s.pop();
	}

}
