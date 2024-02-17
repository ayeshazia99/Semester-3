#include<iostream>
using namespace std;
//Tail Recursion
void tail(int arr[],int n){
if(n==1){
return;
}
int x,temp;
for(x=0;x<n-1;x++){
if(arr[x]>arr[x+1]){
temp=arr[x];
arr[x]=arr[x+1];
arr[x+1]=temp;
}

}
return tail(arr,n-1);
}


int main(){
int array[6]={12,11,13,5,6,7};
tail(array,6);
cout<<"Sorted array:";
for(int x=0;x<6;x++){
cout<<array[x]<<",";
}
}

