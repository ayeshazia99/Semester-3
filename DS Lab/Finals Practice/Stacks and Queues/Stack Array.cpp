#include<iostream>
using namespace std;
class stack{
	public:
	int top;
	int max;
	int arr[40];
	stack(){
		top=0;
		max=40;
	}
	bool isfull(){
		if(top==max)
		return true;
		else
		return false;
	}
	bool isempty(){
		if(top==0)
		return true;
		else
		return false;
	}
	void push(int x){
		if(isfull()){
			cout<<"STACK OVERFLOW!";
		}
		else{
			top++;
			arr[top]=x;
		}
	}
	int pop(){
		if(isempty()){
			cout<<"STACK UNDERFLOW";
		}
		else{
			int x=arr[top];
			top--;
			return x;
		}
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
		cout<<s.pop();
	}
}
