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
node(int d){
	data=d;
	next=NULL;
}
};
class CLL{
	public:
	node *head;
	node *tail;
	CLL(){
	head=tail=NULL;
	}
	CLL(node *n){
		head=tail=n;
		tail->next=head;
	}

void insert_end(int d){ //insert nodes at end of circular linked list
	node *temp=head;
	node *n=new node;
	n->data=d;
	if(head==NULL){
		head=n;
		head->next=head;		
	}
	else{
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	temp->next->next=head;
}
}

void display(){ //display the circular linked list
	node *temp;
	temp=head;
	cout<<"P"<<temp->data<<endl;
	temp=temp->next;
	while(temp!=head){
		cout<<"P"<<temp->data<<endl;
		temp=temp->next;
	}

}
};
int main(){
	CLL c1;	
	int process=0;
	cin>>process; //number of processes
	int x[process];
	int y[process];
	string q;
	for(int i=0;i<process;i++){ //take input for process id,time and quota
		cin>>q;
		cin>>x[i];
		cin>>y[i];
	}
	int os[process];
	
	for(int i=0 ; i<process;i++){
	    	os[i]=x[i]/y[i];
	}


while((os[0]!=0)||(os[1]!=0)||(os[2]!=0)){ //round robin to obtain valid quota
	if(os[0]!=0){
	    os[0]=os[0]-1;
		c1.insert_end(1);
	
	}
	if(os[1]!=0){
	 os[1]=os[1]-1;   
	c1.insert_end(2);
		
	}	
	if(os[2]!=0){
	os[2]=os[2]-1;    
	c1.insert_end(3);		
	}		
}
c1.display();	
}
