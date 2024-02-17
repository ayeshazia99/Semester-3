#include<iostream>
using namespace std;
int bubble(int *arr){
		for(int j=0;j<5;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	bubble(arr);
		for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
