#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *prev;
	node(){
		data=0;
		next=prev=NULL;
	}
	node(int d){
		data=d;
		next=prev=NULL;
	}
};
class CDLL{
	public:
		node *head;
		node *tail;
		CDLL(){
			head=tail=NULL;
		}
		CDLL(node *n){
			head=tail=n;
		}
	void insert_begin(int d){
		if(head==NULL){
			head=tail=new node;
			head->data=d;
			tail->next=head;
			head->prev=tail;
		}
		else{
		node *n=new node;
		n->data=d;
		n->next=head;
		n->prev=tail;
		tail->next=n;
		head=n;
	}
}
	void insert_end(int d){
		node *n=new node;
		node *temp;
		n->data=d;
		while(temp->next!=head){
			temp=temp->next;
		}
		n->next=head;
		n->prev=tail;
		tail->next=n;
		tail=n;
	}
	void insert_any(int p,int d){
	node *temp=head;
	node *n=new node;
	n->data=d;
	node *q;
	for(int i=0;i<p;i++){
		temp=temp->next;
		q=temp->next;
	}	
	n->next=q;
	n->prev=temp;
	temp->next=n;
	q->prev=n;
	}
	void remove_start(){
		node *temp;
		temp=head;
		head=head->next;
		//head->prev=tail;
		tail->next=head;
		delete temp;
	}
	void remove_end(){
		node *temp=head;
		node *p;
		while(temp->next!=head){
			p=temp;
			temp=temp->next;
		}
		head->prev=p;
		p->next=head;
		tail=p;
		delete temp;
	}
	void remove_any(int p){
		node *temp=head;
		for(int i=0;i<p;i++){
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		delete temp;
	}
	void display(){
node *temp;
temp=head;
while(temp->next!=head){
cout<<temp->data;
temp=temp->next;
}
cout<<temp->data;
}
};
int main(){
	CDLL c1;
	c1.insert_begin(5);
	c1.insert_begin(6);
	c1.insert_end(7);
	c1.insert_end(8);
	c1.insert_any(2,3);
	c1.display();
	c1.remove_start();
	cout<<endl;
	c1.display();
}
