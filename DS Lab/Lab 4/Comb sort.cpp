#include<iostream>
using namespace std;
int combSort(int *array, int size){
int gap=size;
int i;
const float shrink_factor=1.3;		
while(gap!=1){
gap=gap/shrink_factor;
for(i=0;i<size-gap;i++){
if(array[i]>array[i+gap]){
swap(array[i],array[i+gap]);
}
}
}

for(i=0;i<size;i++){
cout<<array[i]<<" ";
}
}
int main(){
int x,arr[10];
cout<<"Enter elements of array:";
for(x=0;x<10;x++){
cin>>arr[x];
}
combSort(arr,10);
}
