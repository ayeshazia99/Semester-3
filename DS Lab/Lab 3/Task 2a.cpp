#include<iostream>
using namespace std;
int func(int m,int n);
int func2(int x,int y);
int func2(int x,int y){
if(y==28){
return 0;
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
func2(0,1);
}
