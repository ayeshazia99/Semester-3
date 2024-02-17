#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
	
};

void InsertatTail(node *& head,int val){
	node *temp=head;
	node *n=new node(val);
	
	
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
void InsertHead(node*&head,int val ){
	node *temp=head;
	while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=NULL;
	node*n=new node(val);
	n->next=head;
	head=n;
	temp->next=head;
}
void display(node *head){
	node *temp=head;
	cout<<"P"<<temp->data<<endl;
	temp=temp->next;
	while(temp!=head){
		cout<<"P"<<temp->data<<endl;
		temp=temp->next;
	}
	
}
bool search(node *head,int val){
	node *temp=head;
	if(temp->data==val){
		return true;
	}
	else{
		temp=temp->next;
	}
	
	while(temp !=head){
		if(temp->data==val){
			
			return true;
			
		}
		else{
			temp=temp->next;
		}
		
	}
	return false;
}
void deletehead(node *&head){
	node *temp=head;
	
	
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=head->next;
	
	node * todel= head;
	head=head->next;
	delete todel;
	
}




void deletenode(node *&head,int val){
	if(head->data==val){
		deletehead(head);
		return;
	}
	else{
		node *temp=head;
		while(temp->next->data!=val){
			temp=temp->next;
		}
		node * todel=temp->next;
		temp->next=temp->next->next;
		delete todel;
		
		
}}
void insertbetween(node *&head,int val){
	int d;
	cout<<"data to insert after: ";
	cin>>d;
	node*temp = head;
	node *n=new node(val);
while(temp->data!=d){
	temp=temp->next;
}
node *nextnode = temp->next;
temp->next=n;
n->next=nextnode;
	
}
void sort(node *&head){
	int d;
node* temp=head;	
node *t=NULL;
while(temp->next!=NULL){
	t=temp->next;
	while(t!=NULL){
		if(temp->data>t->data){
			d=temp->data;
			temp->data=t->data;
			t->data=d;
		}
		t=t->next;
	}
	temp=temp->next;
}
	
	
}



int main(){
	int circle=0;
	cin>>circle;
	node *head=NULL;
	
	
	int a[circle];
	int b[circle];
	string s;
	for(int i=0;i<circle;i++){
		cin>>s;
		cin>>a[i];
		cin>>b[i];
	}
	
	int p[circle];
	
	for(int i=0 ; i<circle;i++){
	    	p[i]=a[i]/b[i];
	}


while((p[0]!=0)||(p[1]!=0)||(p[2]!=0)){
	if(p[0]!=0){
	    p[0]=p[0]-1;
		InsertatTail(head,1);
	
	}
	if(p[1]!=0){
	 p[1]=p[1]-1;   
	InsertatTail(head,2);
		
	}	
	if(p[2]!=0){
	p[2]=p[2]-1;    
	InsertatTail(head,3);
		
	}	
	
}



display(head);
	
}
