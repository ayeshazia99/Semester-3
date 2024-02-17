#include<iostream>
using namespace std;
class Numbers{
private:
int size;
int *var1;
int *var2;
public:
int func(int x,int y){
var1=new int;
var2=new int;
*var1=x;
*var2=y;
}
Numbers(){
}
Numbers(const Numbers &obj){
size=obj.size;
var1=new int;
var2=new int;
*var1=*obj.var1;
*var2=*obj.var2;
}
void showdata(){
cout<<"Value of x is:"<<*var1;
cout<<"Value of y is:"<<*var2;
}
~Numbers(){
delete var1;
}
};
int main(){
Numbers n;
n.func(5,6);
Numbers n1(n);
n1.showdata();
}
