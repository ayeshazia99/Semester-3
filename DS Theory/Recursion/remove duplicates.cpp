#include<iostream>
using namespace std;
string func(string str){
	if(str.length()==0){
		return "";
	}
	char s=str[0]; //stores a
	string ans=func(str.substr(1)); //passes abbccdd
	if(s==ans[0]){ //checks if a=a
		return ans; //returns abbccdd
	}
	return s+ans;
	}
int main(){
cout<<func("aabbccdd");	
}
