#include<iostream>
using namespace std;
int MinMax(int &p,int &p1){
cout<<"The maximum value is:"<<p<<endl;
cout<<"The minimum value is:"<<p1;
}
int main(){
int arr[5];
int i;
int x=100;
int y=0;
int *max;
int *min;
max=&y,min=&x;
cout<<"Enter variables:";
for(i=0;i<5;i++){
cin>>arr[i];

if(arr[i]>*max){
max=&arr[i];
}
else if(arr[i]<*min){
min=&arr[i];
}
}

MinMax(*max,*min);
}
