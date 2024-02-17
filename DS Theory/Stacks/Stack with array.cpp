#include<iostream>
using namespace std;
class stack{
	public:
		int top;
		int max;
		int arr[50];
		stack(){
			max=50;
			top=0;
		}
bool isfull(){
	if(top==max){
		return true;
	}
	else
	return false;
}		
bool isempty(){
	if(top==0){
		return true;
	}
	return false;
}
void push(int x){
	if(isfull()){
		cout<<"Stack overflow";
		return;
	}
	else{
	top++;
	arr[top]=x;
}
}
int pop(){
	if(isempty()){
		cout<<"Stack underflow!";
	}
	else{
	int x=arr[top];
    top--;
	return x;
}
}
int peek(){
	if(top<0){
		cout<<"Stack is empty";
	}
	int x=arr[top];
	return x;
}
};
int main(){
	stack s;
	int x;
	for(int i=0;i<5;i++){
		cin>>x;
		s.push(x);
	}


	for(int i=0;i<5;i++){
	cout<<s.pop()<<endl;
	}

}
