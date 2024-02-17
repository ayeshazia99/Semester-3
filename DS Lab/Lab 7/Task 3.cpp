#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class stack{
public:
	int top;
	char a[21];
	stack(){
	top=-1;
	}
	bool push(char x){
	if(top>=(21-1)){
	cout<<"Stack Overflow!";
	return false;
	}
	else{
	a[++top]=x;
			return true;
			return x;
	}
	}
	char pop(){
	if(top<0){
	cout<<"Stack Underflow!";
	return 0;	
	}
	else{
		char x=a[top--];
		return x;
	}
	}
	bool isEmpty(){
		return (top<0);
	}

int prec(char c) {
    if(c == '^') {
        return 3;
    }
    else if(c == '*' || c == '/') {
        return 2;
    }
    else if(c == '+' || c =='-') {
        return 1;
    }
    else {
        return -1;
    }
}
friend string infixToPostfix(string s);
};
string infixToPostfix(string s) {
    stack st;
    string post;
    for (int i = 0; i < 21; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            post += s[i];
        }
        
        else if(s[i] == '^' ){
            st.push(s[i]);
        }
        else if(s[i] == '(' ){
            st.push(s[i]);
        }
        else if(s[i] == '+' ){
            st.push(s[i]);
        }
        else if(s[i] == '/' ){
            st.push(s[i]);
        }
        else if(s[i] == '*' ){
            st.push(s[i]);
        }
        else if(s[i] == '-' ){
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while (!st.isEmpty() && st.top != '(')
            {
				st.pop();
				post+= st.top;
            }
            if(!st.isEmpty()) {
                st.pop(); 
            }
        }
        else {
            while (!st.isEmpty() && st.prec(st.top) >= st.prec(s[i]))
            {
                st.pop();
				post += st.top;
            }
            st.push(s[i]);
        }
    }
    
    while (!st.isEmpty())
    {
       post += st.top;
       st.pop();
    }
    
    return post;
}

int main() {
//	string str;
//	cout<<"The infix expression is:";
//	cin>>str;
    string str = "a+b*(c^d-e)^(f+g*h)-i";
//    cout<<"You entered:"<<str<<endl;
cout<<"The Infix expression is:";
for(int i=0;i<21;i++){
	cout<<str[i];
}
cout<<endl<<endl;
    cout<<"The Postfix expression is:"<<infixToPostfix(str);
}
