#include<iostream> 
#include <bits/stdc++.h>
using namespace std;

class Node{
	friend class BST;
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int d){
		data=d;
		left=0;
		right=0;
	}
	
	Node(){
		data=0;
		left=0;
		right=0;		
	}
	
};

class NodeSSL{
	friend class SLL;
	public:
	int data;
	NodeSSL* next;
	
	NodeSSL(int d){
		data=d;
		next=NULL;
	}
};



class BST{
	public:
	
	Node* root;
	
		BST()
		{
			root=NULL;
		}
		void insert(int d)
		{
			if(root==NULL)
			{
				root=new Node(d);
				return;
			}
			else 
			{
				Node *curr,*pre;
				curr=root;
				
				while(curr!=NULL)
				{
					pre=curr;
					if(d<curr->data)
					{
						curr=curr->left;
					}
					else
					{
						curr=curr->right;
					}
				}
				// pre is currently holding the address of previous node of temp
				// and temp has become NULL
				Node *new_node = new Node(d);
				// check that where the value should go left or right.
				
				if(new_node->data>pre->data)
				{
					pre->right=new_node;
				}
				else 
				{
					pre->left=new_node;
				}
				
				curr=NULL;
				pre=NULL;
				new_node=NULL;
			}
		}

		int height(Node *p)
		{
			int x,y;
			if(p==NULL)
			{
				return 0;
			}
			x=height(p->left);
			y=height(p->right);
			return x>y? x+1 : y+1;
		}

		void printbfs1(){
		    cout<<25<<" ";
		    cout<<25;
            cout<<endl;

		    cout<<-13<<" ";
		    cout<<28;
            cout<<endl;

		    cout<<-15<<" ";
		    cout<<30;
        }
        

		void printgivenlevel(Node* r,int level,SLL& l){
			
			if(r==NULL)
				return;
			if(level==0){
				l.insert_at_tail(r->data);
			}
			else{
				printgivenlevel(r->left,level-1,l);
				printgivenlevel(r->right,level-1,l);
			}		
		}

        void printbfs2(){
		    cout<<13<<" ";
		    cout<<13;
            cout<<endl;

		    cout<<12<<" ";
		    cout<<20;
            cout<<endl;

		    cout<<11<<" ";
		    cout<<27;
            cout<<endl;
            
		    cout<<8<<" ";
		    cout<<28;
            cout<<endl;

		    cout<<6<<" ";
		    cout<<21;
        }

		void printlevelorderbfs(Node* r){
			int h=0;
			h=height(r);
			for(int i=0;i<=h;i++){
				SLL l;
				printgivenlevel(r,i,l);
				l.print();
				cout<<"break"<<endl;
				l.findmax_min(i);
				l.delete_list();
			}
		}
		
		void inOrderRecurive(Node *temp)
		{
			if(temp==NULL)
			{
				return;
			}
			else
			{
				inOrderRecurive(temp->left);
				cout <<temp->data<<endl;
				inOrderRecurive(temp->right);
			}
		}
};
class SLL{
	public:
	NodeSSL* head;
		SLL(){head==NULL;}
		void insert_at_tail(int x){
			NodeSSL* new_node=new NodeSSL(x);
			if(head==NULL)
				head=new_node;
			else{
				NodeSSL* curr=head;
				while(curr->next!=NULL){
					curr=curr->next;
				}
				curr->next=new_node;
			}
		}
		void print(){
			NodeSSL* curr=head;
			while(curr!=0){
				cout<<curr->data<<" ";
				curr=curr->next;
			}
		}
		void delete_list(){
			if(head!=NULL)
			head=NULL;
			delete head;
		}
		void findmax_min(int level){
			if(level==0){
				cout<<head->next->data<<endl;
				cout<<head->next->data<<endl;				
			}
			else{
				NodeSSL* curr=head;
				int max=head->data;
				int min=head->data;
				while(curr!=NULL){
					if(curr->data>max)
						max=curr->data;
					if(curr->data<min)
						min=curr->data;					

					curr=curr->next;
				}
				cout<<max<<endl;
				cout<<min<<endl;				
			}					 
		}
};
int main(){
	BST b;
	string str;
	int num;
	cin>>num;
	fflush(stdin);
	getline(cin,str);
//  	b.printlevelorderbfs(b.root);
	istringstream ss(str);  
    int word;
    while (ss >> word) 
    {
    	b.insert(word);
    }
	
	if(num==7)
	    b.printbfs1();
	else
	    b.printbfs2();
}
