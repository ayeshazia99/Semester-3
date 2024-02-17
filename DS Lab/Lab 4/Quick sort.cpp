#include<iostream>
using namespace std;
int quicksort1(int *array, int low,int high){
int pivot=array[high];
int i=low-1;
int j;
for(j=low;j<=high-1;j++){
if(array[j]<=pivot){
i++;
swap(array[i],array[j]);
}
}
swap(array[i+1],array[high]);
return i+1;
}
void quicksort(int *array, int low,int high){
int p;
if(low<high){
int p=quicksort1(array,low,high);
quicksort(array,low,p-1);
quicksort(array,p+1,high);
}}
int main(){
int x,arr[10],first,last;
cout<<"Enter ten elements of array:";
for(x=0;x<10;x++){
cin>>arr[x];
}
quicksort(arr,0,9);
cout<<"Sorted Array:";
for(x=0;x<10;x++){
cout<<arr[x]<" ";
}
}
