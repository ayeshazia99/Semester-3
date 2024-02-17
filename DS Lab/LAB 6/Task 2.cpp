#include <iostream>
using namespace std;
class node{
    int data;
    node *next;
    public:
    node(){
        data=0;
        next=NULL;
    }
    node(int d,node *t=0){
        data=d;
        next=this;
    }
    friend class CLL;
};
class CLL{
    node *tail;
    public:
    CLL(){
        tail=NULL;
        
    }
    CLL(int d){
        tail=new node(d);
    }
    void insert_end(int d){
        if(tail==NULL){
            tail=new node(d);
        }
        else{
            node *temp;
            temp=new node(d);
            temp->next=tail->next;
            tail->next=temp;
            tail=temp;
        }
    }
    void insert_begin(int d){
        if(tail==NULL){
            tail=new node(d);
        }
        else{
            node *temp;
            temp=new node(d);
            temp->next=tail->next;
            tail->next=temp;
        }
    }
    void add_anywhere(int n, int value){
        node *temp= new node;
        node *ptr= new node;
        temp->data=value;
        temp->next=0;
        ptr=tail->next;
        for (int i = 1; i < n-1; i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    void delete_any(int index){
        if(index<=0)
        cout<<"\nInvalid pos";
        else{
            node *temp=tail->next;
            node *prev;
            int i=1;
            while(i<index){
                i++;
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
            delete temp;   
        }   
    } 
    void display(){
        node *temp=tail->next;
        if(tail==NULL)
        cout<<"\nlist is empty";
        else if(temp->next==tail){
            cout<<temp->data<<" ";
        }
        else{
            while(temp!=tail)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
             cout<<temp->data;
        }
    }
};
int main()
{
CLL l1;
l1.insert_end(10);
l1.insert_end(20);
l1.insert_begin(30);
l1.insert_begin(40);
//ob1.delete_any(5);
l1.add_anywhere(2,50);
cout<<"The circular linked list is:";
l1.display();
}
