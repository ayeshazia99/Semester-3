#include<iostream>
using namespace std;
bool selectionSort(int *array, int size) {
int i,j;
for(i=0;i<size-1;i++){
int min=i;
for(j=i+1;j<size;j++){
if(array[j]<array[min]){
min=j;
}
int temp=array[i];
array[i]=array[min];
array[min]=temp;
}}

for(i=0;i<size;i++){
cout<<array[i];
}	
}

int main(){
int x,arr[5];
cout<<"Enter elements of array:";
for(x=0;x<5;x++){
cin>>arr[x];
}
selectionSort(arr,5);
}
