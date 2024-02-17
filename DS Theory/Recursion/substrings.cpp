#include<iostream>
using namespace std;
void func(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
    char ch=str[0];
    string ros=str.substr(1);

    func(ros,ans);
    func(ros,ans+ch);
}
int main(){
	func("ABC","");
}
