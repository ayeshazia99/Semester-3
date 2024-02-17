#include<iostream>
#include<stack>
using namespace std;
bool bracket(string s){
	stack<char> st;
	bool ans=true;
	for(int i=0;i<s.length();i++){
			char c=s[i];
		if((c=='(') || (c=='[') || (c=='{')){
			st.push(c);
		}
		else if(c==')'){
			if(st.top()=='('){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(c==']'){
			if(st.top()=='['){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(c=='}'){
			if(st.top()=='{'){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
	}
	if(!st.empty()){
		return false;
	}
	return ans;
	
}
int main(){
	string s="{[(]}";
	if(bracket(s)){
		cout<<"Valid String";
	}
}
