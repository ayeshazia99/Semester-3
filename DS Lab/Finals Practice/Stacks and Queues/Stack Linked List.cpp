#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node *top;
	node(){
		data=0;
		next=top=NULL;
	}
	void push(int x){
		node *temp=new node;
		if(!temp){
			cout<<"Stack Overflow!";
		}
	
	temp->data=x;
	temp->next=top;
	top=temp;
}
	int pop(){
		node *temp=top;
		if(temp==NULL){
			cout<<"Stack is empty!";
		}
		int x=temp->data;
		top=temp->next;
		return x;
	}
	void print(){
		node *temp=top;
		while(temp->next!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
};
int main(){
		node s;
	int x;
	for(int i=0;i<5;i++){
		cin>>x;
	s.push(x);	
	}
	for(int i=0;i<5;i++){
		cout<<s.pop();
	}
}
