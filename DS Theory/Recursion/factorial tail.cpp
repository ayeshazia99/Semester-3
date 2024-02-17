#include<iostream>
using namespace std;
int func(int m,int n){
if(m==1){
return 1;
}
else{
return func(m-1,m*n);
}
}
int main(){
cout<<func(5,1);
}
