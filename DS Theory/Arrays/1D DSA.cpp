#include<iostream>
using namespace std;
class DSA{
public:
int col;
int *dArray;
public:
DSA(){
col=0;
dArray=NULL;
}
DSA(int n){
col=n;
dArray=new int[col];
}
~DSA(){
delete [] dArray;
dArray=NULL;
}
int &operator[](int i){
if(i<0 || i>col-1){
cout<<"Boundary error";
}
return dArray[i];
}
DSA(const DSA &obj){
col=obj.col;
dArray=new int[col];
}
DSA &operator=(const DSA &obj){
if(this==&obj){
return *this;
delete []dArray;
dArray=NULL;
}
col=obj.col;
dArray=new int[col];
}
};
int main(){
DSA d1,d2;
d1=d2;
}
