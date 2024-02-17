#include <iostream>
#include <string>
using namespace std;
int main()
{
int rows=5;
int *numbers = new int[5];  
float **array = new float*[5];
float gpa,gpa1,sum; 
string name;
string subjects[5]={"Data Structure","Programming","DLD","Statistics","Accounts"};
for (int i = 0; i < 5; i++)
{
cout<<"Enter name:";
cin>>name;
cout << "Enter no. of subjects:";//no. of rows 
cin >> numbers[i];
array[i] = new float[numbers[i]];
sum=0;
for (int j = 0; j < numbers[i]; j++)
{
cout << name << " , enter your gpa in "  << subjects[j]<< ": ";//column-wise input in array
cin >> array[i][j];
gpa=(array[i][j]*3);
sum=sum+gpa;
}
gpa1=sum/numbers[i]*3;
cout<<"Your GPA is: "<<gpa1<<endl<<endl;
}

}
