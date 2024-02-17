#include<iostream>
using namespace std;
class node{
public:
int base;
char a;
int pow;
node *next;

node(int b,char c,int p){
	base=b;
	a=c;
	pow=p;
	next=NULL;
}
};

void insert_begin(node *&head,int val, char c,int power ){
	node*n=new node(val,c,power);
	n->next=head;
	head=n;
}
void insert_end(node *&head,int base,char c,int pow){
	node *temp=head;
	node *n=new node(base,c,pow);
	if(head==NULL){
		head=n;	
	}
	else{
	
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
}
void addnode(node &head1, node& head2, node *&result){
	int i=0;
    node *t1=&head1;
    node* t2=&head2;
    node* res=result;
    while(t1 !=NULL || t2 != NULL){
    	if((t1->pow==t2->pow) && (t1->a == t2->a))
		{
		insert_end(result,t1->base + t2->base,t1->a , t1->pow);
		t1=t1->next;
		t2=t2->next;
		i++;
    		
		}
		else if((t1->a == t2->a)&&(t1->pow > t2->pow)){
			insert_end(result,t1->base,t1->a , t1->pow);
			t1=t1->next;
			i++;
		}
		else if ((t1->a == t2->a)&&(t1->pow < t2->pow)){
			insert_end(result,t2->base,t2->a , t2->pow);
			t2=t2->next;
			i++;
		}
		else  if(t1->a != t2->a){
			insert_end(result,t1->base,t1->a , t1->pow);
			insert_begin(result,t2->base,t2->a , t2->pow);
			t1=t1->next;
			t2=t2->next;
			i++;
			i++;
		}
		else if(t1== NULL ){
			insert_end(result,t2->base,t2->a , t2->pow);
			t2=t2->next;
			i++;
		}
		else if(t2== NULL ){
			insert_end(result,t1->base,t1->a , t1->pow);
			t1=t1->next;
			i++;
		}
		
	}
    
}
void reverse(node *&head){
node *prev=NULL,*next=NULL,*curr;
curr=head;
while(curr!=NULL){
next=curr->next;
curr->next=prev;
prev=curr;
curr=next; 
}
head=prev;
}
void display(node *head){
	reverse(head);
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->base<<" "<<temp->a<<" "<<temp->pow<<endl;
		temp=temp->next;
	}
	
}
int main(){

node *n1=NULL;
node *n2=NULL;
node *result=NULL;
int x,y; 
int base,pow;
char a;
cin>>x;

for(int i=0;i<x;i++){
	cin>>base;
	cin>>a;
	cin>>pow;
	insert_end(n1,base,a,pow);
}
cout<<"Enter y:";
cin>>y;
for(int i=0;i<y;i++){
	cin>>base;
	cin>>a;
	cin>>pow;
	insert_end(n2,base,a,pow);
}
addnode(n1,n2,*result);
if(x>y){
	cout<<x<<endl;
}
else{
	cout<<i<<endl
}
display(result);
}
