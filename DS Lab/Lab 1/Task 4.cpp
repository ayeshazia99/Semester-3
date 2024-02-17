#include<iostream>
using namespace std;
int func(int y){
int count,sum=0;
for(count=1;count<100;count++){
if(y%count==0){
cout<<"the factor is:"<<count;
sum=sum+count;
}
}
return sum;
}
int main(){
int x,y;
int i,factor,sum=0;
cout<<"Enter a positive integer:";
cin>>x;
y=func(x);
cout<<"The sum is:"<<y;
}
