#include<iostream>
using namespace std;
int main(){

bool **values=new bool*[5];
int i,j,x,y;
for(i=0;i<5;i++){
values[i]=new bool[5];
}
values[0][1]=values[0][3]=values[0][4]=values[1][0]=values[1][2]
=values[1][4]=values[2][1]=values[3][0]=values[3][4]=values[4][0]=values[4][1]=values[4][3]=true;
values[0][0]=values[0][2]=values[1][1]=values[1][3]=values[2][0]
=values[2][2]=values[2][3]=values[2][4]=values[3][1]=values[3][2]=values[3][3]=values[4][2]=values[4][4]=false;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(values[i][j]==true){
cout<<" * ";
}
else
cout<<"  ";
}
cout<<endl;
}
cout<<"Enter two values:";
cin>>x;
cin>>y;
if(values[x][y]==true){
cout<<"Common friends";
}
else
cout<<"Not friends";
}
