#include<iostream>
using namespace std;
int main(){
int x,y;
int count=1;
int i,factor,sum=0;
cout<<"Enter a positive integer:";
cin>>x;
if(x!=-1){
for(count=1;count<1000;count++){
if(x%count==0){
cout<<"the factor is:"<<count<<endl;
sum=sum+count;
}
}
cout<<"The sum is:"<<sum;
}
else
exit(0);
}

