#include<iostream>
using namespace std;
void probability(int tictactoe[3][3])
{
	int prob1=0,prob2=0;
	 for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
   {
   if(tictactoe[i][j-i]==1)
   {
   	prob1=prob1+1;
   }
   else if(tictactoe[i][j-i]==2)
   {
   	prob2=prob2+1;
   }
   if(tictactoe[i][j]==1)
   {
   	prob1=prob1+1;
   }
   else if(tictactoe[i][j]==2)
   {
   	prob2=prob2+1;
   }
   
   if(tictactoe[j][i]==1)
   {
   	prob1=prob1+1;
   }
   else if(tictactoe[j][i]==2)
   {
   	prob2=prob2+1;
   }
   
   
   }
   }
   
   if(prob1>prob2)
   {
   	cout<<"2";
   }
   else if(prob2>prob1)
   {
   	cout<<"1";
   }

}





int main()
{
	

   int game[3][3],input;
   int valid1=0,valid2=0;
   int prob1=0,prob2=0;
   
   
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
   {
   	cin>>input;
   	 game[i][j]=input;
   }
   }
   
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
   {
   	if(game[i][j]==1)
   	{
   		valid1=valid1+1;
	   }
	else if(game[i][j]==2)
   	{
   		valid2=valid2+1;
	   }
   	 
   }
   }
   
   if(valid1>valid2+1 || valid2>valid1+1)
   {
   	cout<<"-1";
   	
   }
   else if(game[0][0]==2 && game[1][1]==1 && game[2][2] ==1)
   {
   	cout<<"0";
   }
   else 
   {
   	
   probability(game);
   
   
}
}
