#include<iostream>
using namespace std;
int func(int m,int n){
if(m==0){
return m;
}
else{
	
int sum=m+func(m,n);
return sum;
}
}
int main(){
int i;
int n=1;
for(i=0;i<9;i++){
cout<<func(i,n);
n++;
}
}
