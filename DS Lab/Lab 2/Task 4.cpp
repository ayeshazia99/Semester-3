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
int row, column;
cout<<"Enter two values:";
cin>>row;
cin>>column;
int point=0, row1[5];
int column1[5];
for(i=0;i<5;i++){
if(values[row][i]==true){
	row1[i] = i;
}}
for(i=0;i<5;i++){
if(values[i][column] == true){
	column1[i] = i;
}}
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	if(row1[i]==column1[j]){
		point = 1;
		cout<<i<<", ";
	}
	}
}
cout<<"are common friend of "<<row<<" and "<<column<<endl;

}

