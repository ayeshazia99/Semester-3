#include<iostream>
using namespace std;
int func(int m,int n){
if(n==0){
return 1;
}
else{
int power=m*func(m,n-1);
return power;
}
}
int main(){
cout<<func(2,5);
}
