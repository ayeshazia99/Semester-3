#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[]){
int i;
	cout<<argc;
	for(int i=0;i<argc;i++){
		cout<<argv[i];
	}
fstream f;
fstream f1;
f.open("original.txt");
f1.open("copied.txt");
string line;
char* text;
int n=10;
while(f){
f.read(text,n);
cout<<text;
f1.write(text,n);
}
f.close();
f1.close();
}

