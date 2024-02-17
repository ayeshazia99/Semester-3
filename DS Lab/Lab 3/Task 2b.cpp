#include<iostream>
using namespace std;
int func(int m,int n);
int func2(int x,int y);
int func2(int x,int y){
if(y>=28){
return y;
}
else{
func(x,y);
}
}
int func(int m,int n){
int value;
value=m+n;
cout<<value<<endl;
func2(value,n+1);
}
int main(){
int a=1;
int b;
cout<<"Enter increment in first number:";
cin>>b;
cout<<b<<endl;
func2(a,b);
}
