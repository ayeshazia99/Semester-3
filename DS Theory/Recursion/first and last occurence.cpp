#include<iostream>
using namespace std;
int first(int arr[],int size,int find, int i){
	if(arr[i]==find){
		return i;
	}
	return first(arr,size,find,i+1);
}
int last(int arr[],int size,int find, int i){
	if(arr[i]==find){
		return i;
	}
	return last(arr,size,find,i-1);
}


int main(){
	int arr[]={1,2,3,5,2,6,7,2,9};
	cout<<first(arr,9,2,0)<<endl;
	cout<<last(arr,9,2,8);
}
