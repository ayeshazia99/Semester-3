#include<iostream>

using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            next=NULL;
        }
};

class MaxHeap{
    private:
        Node *root;
    public:
        MaxHeap(){
            root=NULL;
        }
        void push(int val){
            Node *priority=new Node(val);
            if(!root){
                root=priority;
                return;
            }
            if(val>root->val){
                priority->next=root;
                root=priority;
                return;
            }
            Node *cur=root;
            while(cur->next && cur->next->val>val){
                cur=cur->next;
            }
            priority->next=cur->next;
            cur->next=priority;
        }
        int pop(){
            Node *temp=root;
            root=root->next;
            int ret=temp->val;
            delete temp;
            return ret; 
        }
        bool isEmpty(){
            if(!root)
                return true;
            return false;
        }
};

int main(){
    MaxHeap h;
    h.push(1);
    h.push(2);
    h.push(10);
    h.push(100);
    h.push(20);
    
    while(!h.isEmpty()){
        cout<<h.pop()<<" ";
    }
}
