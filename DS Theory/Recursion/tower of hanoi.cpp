#include<iostream>
using namespace std;
void towerofhanoi(int n,char source,char help,char des){
	if(n==0){
		return;
	}
	towerofhanoi(n-1,source,des,help);
	cout<<"Move from"<<source<<"to"<<des<<endl;
	towerofhanoi(n-1,help,source,des);
}
int main(){
	towerofhanoi(3,'A','B','C');
} 
