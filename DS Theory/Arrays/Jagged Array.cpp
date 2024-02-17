#include<iostream>
using namespace std;
int main(){
int **arr=new int*[3];
int size[3];
int i,j;
for(i=0;i<3;i++){
cout<<"Enter size of each row:";
cin>>size[i];
arr[i]=new int [size[i]];
}
for(i=0;i<3;i++){
for(j=0;j<size[i];j++){
cout<<"Enter elements of Row:"<<i+1;
cin>>arr[i][j];
}
}
for(i=0;i<3;i++){
for(j=0;j<size[i];j++){
cout<<arr[i][j];
}
cout<<endl;
}
}
