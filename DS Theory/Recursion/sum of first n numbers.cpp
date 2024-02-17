#include<iostream>
using namespace std;
int sum(int n){
if(n==1){
	return 1;
}
int sum1;
sum1=n+sum(n-1);
return sum1;
}
int main(){
int x;
cout<<"Enter number:";
cin>>x;
cout<<sum(x);
}
