#include<iostream>
using namespace std;
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

int main(){
int x,arr[5];
cout<<"Enter elements of array:";
for(x=0;x<5;x++){
cin>>arr[x];
}
insertionSort(arr,5);
}
