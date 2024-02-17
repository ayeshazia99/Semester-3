#include<iostream>
using namespace std;
int main(){
int i,j;
int matrix[i][j];
int flag=0;
cout<<"Enter number of rows:";
cin>>i;
cout<<"Enter number of columns:";
cin>>j;
int x,y;
cout<<"Enter elements:";
for(x=0;x<i;x++){
for(y=0;y<j;y++){
cin>>matrix[x][y];
}
}
for(x=0;x<i;x++){
for(y=0;y<j;y++){
if(matrix[x][y]!=1 && matrix[y][x]!=0){
flag=1;
break;
}
}
}
if(flag==1){
cout<<"It is not an identity matrix";
}
else
cout<<"It is an identity matrix";
}

