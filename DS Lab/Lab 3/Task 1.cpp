#include<iostream>
using namespace std;
int func(int m,int n){
if(m>=28){
return m;
}
else{
int x;
x=m+n;
cout<<x<<endl;
return func(x,n+1);
}
}
int main(){
int a=0;
int b;
cout<<"Enter increment in first number:";
cin>>b;
func(a,b);
}
