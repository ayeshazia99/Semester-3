#include<iostream>
using namespace std;
int main(){
int array[5]={1,2,3,4,5};
int index[5]={4,0,3,1,2};
int temp[5];
int i;
for(i=0;i<5;i++){
temp[i]=array[index[i]];
}
cout<<"Given array:";
for(i=0;i<5;i++){
     cout<<array[i];
}
cout<<endl;
cout<<"Rearranged array:";
for(i=0;i<5;i++){
     cout<<temp[i];
}
}
