#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char **argv){
fstream read;
string str;
fstream write;
read.open(argv[1],ios::in);
if (!read)
{
    cout<<"the file doesnot exist";
}
    write.open(argv[2],ios::out);
    while(getline(read,str)){
    write<<str;
}
read.close();
write.close();
}

