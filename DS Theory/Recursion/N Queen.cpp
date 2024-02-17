#include<iostream>
using namespace std;
bool safe(int **arr,int x,int y,int n){
for(int row=0;row<x;row++){ //row
if(arr[row][y]==1){
return false;
}
}
int row=x; //left diagonal
int col=y;
while(row>=0 && col>=0){
if(arr[row][col]==1){
return false;
}
row--;
col--;
}
row=x; //right diagonal
col=y;
while(row>=0 && col<n){
if(arr[row][col]==1){
return false;
}
row--;
col++;
}
return true;
}
bool queen(int **arr,int x,int n){// column is not needed as queen is already there
if(x>=n){ //all queens placed //base case
return true;
}
for(int col=0;col<n;col++){
if(safe(arr,x,col,n)){
arr[x][col]=1;

if(queen(arr,x+1,n)){
return true;
}
arr[x][col]=0; //backtracking 
}
}
return false;
}
int main(){
int n,i,j;
cin>>n; 
int **arr=new int*[n];
for(i=0;i<n;i++){
arr[i]=new int[n];
for(j=0;j<n;j++){
arr[i][j]=0;
}
}
if(queen(arr,0,n)){
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<arr[i][j];
}
cout<<endl;
}
}
}




