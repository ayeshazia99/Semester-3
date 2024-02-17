#include<iostream>
using namespace std;
int selection(int arr[]){
	for(int i=0;i<6;i++){
		int min=i;
	for(int j=i+1;j<6;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}
	if(min!=i){
		swap(arr[i],arr[min]);
	}	
	}
}
int main(){
	int arr[6];
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
		for(int i=0;i<6;i++){
		cout<<arr[i];
	}
	cout<<endl;
	selection(arr);
		for(int i=0;i<6;i++){
		cout<<arr[i];
	}
}
