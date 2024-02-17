#include<iostream>
using namespace std;
int func(int m){
if(m==1){
return 1;
}
else{
int power=m*func(m-1);
return power;
}
}
int main(){
cout<<func(5);
}
