#include<iostream>
using namespace std;
int insertion(int arr[]){
	for(int i=1;i<5;i++){
		int temp=arr[i];
		int j=i-1;
		while( j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
		for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	cout<<endl;
	insertion(arr);
		for(int i=0;i<5;i++){
		cout<<arr[i];
	}
}
