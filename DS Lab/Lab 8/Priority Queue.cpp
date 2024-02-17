#include <iostream>
using namespace std;
class node{ 
public:
   int priority;
   int data;
   node *next;
   node(){
   	priority=0;
   	data=0;
   	next=NULL;
   }
};
class queue{
      node *front;
   public:
    queue(){
         front= NULL;
     }
      void insert(int i, int p) {
         node *temp,*q;
         temp=new node;
         temp->data = i;
         temp->priority=p;
         if (front == NULL || p < front->priority) {
            temp->next= front;
            front = temp;
         } else {
            q = front;
            while (q->next != NULL && q->next->priority <= p)
               q = q->next;
               temp->next = q->next;
               q->next = temp;
         }
      }
      void del() {
         node *temp;
         if(front == NULL) 
            cout<<"Queue Underflow\n";
         else {
            temp = front;
            cout<<"Deleted item is: "<<temp->data<<endl;
            front = front->next;
            delete temp;
         }
      }
      void show(){
         node *p;
         p= front;
         if (front == NULL)
            cout<<"Queue is empty\n";
         else {
            cout<<"The Entered Queue is"<<endl;
            while(p != NULL) {
               cout<<"Priority:"<<p->priority<<" Data:"<<p->data<<endl;
               p = p->next;
            }
         }
      }
};
int main(){
	queue q;
	q.insert(16,1);
	q.insert(15,3);
	q.insert(12,2);
	q.insert(10,5);
	q.insert(11,4);
	q.show();
}
