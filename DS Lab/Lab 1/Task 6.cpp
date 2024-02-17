#include<iostream>
using namespace std;
class Student{
public:
string name[5];
int roll;
int age;
public:
void getname(){
int i;
for(i=0;i<5;i++){
cout<<"Enter your name:";
getline(cin,name[i]);
}
}
void ascending(){
int x,y;
string temp;
for(x=0;x<5;x++){
for(y=x+1;y<5;y++){
if(name[x]>name[y]){
temp=name[x];
name[x]=name[y];
name[y]=temp;
}
}
}
cout<<"NAMES IN ASCENDIND ORDER:"<<endl;
for(x=0;x<5;x++){
cout<<name[x]<<endl;
}
}
};
int main(){
Student *s;
int i,j;
string name[5];
s= new Student[5];
s->getname();
s->ascending();
}

