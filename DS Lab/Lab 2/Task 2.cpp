#include<iostream>
using namespace std;
int main(){
int *arr{new int[10]};

int i;
int a,b,x,y,temp;
cout<<"Enter ten values:";
for(i=0;i<10;i++){
cin>>arr[i];
}
for(x=0;x<10;x++){
for(y=x+1;y<10;y++){
if(arr[x]>arr[y]){
temp=arr[x];
arr[x]=arr[y];
arr[y]=temp;
}
}
}
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
cout<<arr[x];
}

}
