#include<iostream>
using namespace std;
int func(int m);
int func1(int m);
int func(int m){
if(m==1){
return 1;
}
else{
int power=m*func1(m-1);
return power;
}
}
int func1(int m){
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
