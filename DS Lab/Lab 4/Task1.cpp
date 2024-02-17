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
cout<<array[i]<<" ";
}	
}
bool insertionSort(int *array, int size) {
int i,j;
int ref;
for(i=1;i<=size-1;i++){
ref=array[i];
j=i-1;
while(j>=0 && array[j] >  ref){
array[j+1]=array[j];
j--;
}
array[j+1]=ref;
}

for(i=0;i<size;i++){
cout<<array[i]<<" ";
}	
}
int combSort(int *array, int size){
int gap=size;
int i;
bool swapped=true;
const float shrink_factor=1.3;		
while(gap!=1 && swapped==true){
swapped=false;
gap=gap/shrink_factor;
for(i=0;i<size-gap;i++){
if(array[i]>array[i+gap]){
swap(array[i],array[i+gap]);
swapped=true;
}
}
}

for(i=0;i<size;i++){
cout<<array[i]<<" ";
}
}
int bubblesort(int *arr,int size){
int x,y,temp;
for(x=0;x<10;x++){
for(y=x+1;y<10;y++){
if(arr[x]>arr[y]){
temp=arr[x];
arr[x]=arr[y];
arr[y]=temp;
}
}
}
cout<<"IN ASCENDIND ORDER:";
for(x=0;x<10;x++){
cout<<arr[x]<<" ";
}
}
int main(){
cout<<"1)BUBBLE SORT"<<endl;
cout<<"2)SELECTION SORT"<<endl;
cout<<"3)INSERTION SORT"<<endl;
cout<<"4)COMB SORT"<<endl;
int x,arr[10];
cout<<"Enter ten elements of array:";
for(x=0;x<10;x++){
cin>>arr[x];
}
cout<<"Enter your choice for sorting:";
cin>>x;
if(x==1){
bubblesort(arr,10);
}
if(x==2){
selectionSort(arr,10);
}
if(x==3){
insertionSort(arr,10);	
}
if(x==4){
combSort(arr,10);
}
}
