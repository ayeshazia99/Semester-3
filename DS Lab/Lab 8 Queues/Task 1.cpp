#include<iostream>
using namespace std;
class Queue{
	public:
		int front;
		int rear;
		int size;
		int number;
		int array[100];
Queue(){
	 size=100;
	front=-1;
	rear=-1;
	number=0;
}
bool QueueCapacity(){
if(number==size){
	return true;
}
else{
return false;
}
}
bool isEmpty(){
	if(number<0){
	    return true;}
	else
	    return false;
}
void AddMember(int x){
	if(!QueueCapacity()){
	rear=(rear+1)%size;
	number++;
	array[rear]=x;
}
}
int RemoveMember(){
	
	if(!isEmpty()){
	front=(front+1)%size;
		int x=array[front];	
		number--;
		return x;
	}
}
};
int main(){
	Queue q1;
	int x;
	for(int i=0;i<5;i++){
		cin>>x;
		q1.AddMember(x);
		cout<<"Value added in queue successfully!"<<endl;
	}
	for(int i=0;i<5;i++){
		cout<<"Value "<<i<<" Removed:"<<q1.RemoveMember()<<endl;

}
}

