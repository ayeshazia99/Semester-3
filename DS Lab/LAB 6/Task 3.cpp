#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previous;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class DLL{
    public: 
    node *head;
    node *tail;
DLL(){
head=NULL;
tail=NULL;
    }
    DLL(node *n, node *n1){
        head=n;
        tail=n1;
    }
void insert_begin(int value){
        node *temp=new node;
        temp->data=value;
        if (head==0)
        {
            head=tail=temp;
            temp->previous=tail;
            temp->next=head;
            return;
        }
        else{
        temp->next=head;
        head->previous=temp;
        temp->previous=tail;
        tail->next=temp;
        head=temp;}
    }
void insert_anywhere(int n, int value){
        node *temp=new node;
        node *ptr= new node;
        temp->data=value;
        ptr=head;
        for (int i = 1; i < n-1; i++)
        {
            ptr=ptr->next;
        }
        temp->previous=ptr;
        temp->next=ptr->next;
        ptr->next->previous=temp;
        ptr->next=temp;
    }
    void insert_end(int value){
         node *temp=new node;
        temp->data=value;
        if (head==0)
        {
            head=tail=temp;
            temp->previous=tail;
            temp->next=head;
            return;
        }
        else{
            temp->previous=tail;
            tail->next=temp;
            temp->next=head;
            head->previous=temp;
            tail=temp;
        }
    }
    void delete_any(int n){
        if(n<=0)
        cout<<"Invalid position";
        else{
            node *temp=new node;
            node *ptr=new node;
            temp=head;
            for (int i = 1; i < n; i++)
            {
                temp=temp->next;
            }
            temp->previous->next=temp->next;
            temp->next->previous=temp->previous;
            if (temp->next==head)
            {
                tail=temp->previous;
                delete temp;
            }
            delete temp;
        }
    }
	void display()
    {
        node *temp;
        temp = head;
        while (temp!=tail)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<temp->data;
    }
};
int main(){
DLL d1;
d1.insert_begin(10);
d1.insert_begin(20);
d1.insert_end(30);
d1.insert_end(40);
//d1.add_position(2,50);
//d1.delete_any(2);
cout<<"The circular doubly linked list is: ";
d1.display();   
}
