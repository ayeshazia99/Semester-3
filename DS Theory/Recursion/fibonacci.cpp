#include<iostream>
using namespace std;
int fib(int m){
if(m==0 || m==1){
return m;
}
else{
int sum=fib(m-1)+fib(m-2);
return sum;
}
}
int main(){
int i;
for(i=0;i<9;i++){
cout<<fib(i);
}
}
