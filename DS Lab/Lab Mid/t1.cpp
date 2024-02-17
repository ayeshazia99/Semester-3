#include<iostream>
#include<string.h>
using namespace std;
class node{
public:
string data;
node *next;
node *prev;
node(){

next=NULL;
prev=NULL;
}

};
class DLL{
public:
node *head;
node *tail;

DLL(){
head=tail=NULL;
}
DLL(node *n){
head=tail=n;
}

void insert_end(string d){
if(head==NULL){
head=new node;
head->data=d;
}
else{
node *temp=head;
node *n=new node;
n->data=d;
n->next=NULL;
while(temp->next!=NULL){
temp=temp->next;
}
n->prev=temp;
temp->next=n;
}}
void remove() {  
node *curr;
node *temp;  
node *index;
 
    if(head == NULL) {  
        return;  
    }  
    else {  
        for(curr= head; curr!= NULL; curr = curr->next) {   
            for(index = curr->next; index != NULL; index = index->next) {  
                if(curr->data == index->data) {  
                    temp = index;  
                    index->prev->next = index->next;  
                    if(index->next != NULL)  
                        index->next->prev = index->prev;  
                    temp = NULL;  
                }  
            }  
        }  
    }  
}  
void display(){
node *temp;
temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
}
void sort(char str[25][25]){
	char temp[25];
	for(int i=0;i<13;i++)
      for(int j=i+1;j<13;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }

}
};
int main(){
DLL d1;
char str[25][25];
char temp[25];
for(int i=0;i<13;i++){
	gets(str[i]);	
}
d1.sort(str);
for(int i=0;i<=13;i++)
      d1.insert_end(str[i]);
d1.remove();
d1.display();
cout<<endl;

}
