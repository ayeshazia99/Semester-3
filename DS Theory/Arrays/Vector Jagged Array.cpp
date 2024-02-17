#include<iostream>
#include<vector>
using namespace std;
int main(){
int i,a,in,j;
vector<vector<int> > vec;
for(i=0;i<3;i++){
vector<int> t; 	
std::cout<<"Enter size of row:";
cin>>a;
cout<<"Enter elements of row:";
for(j=0;j<a;j++){
cin>>in;
t.push_back(in);
}
vec.push_back(t);	
}
}

