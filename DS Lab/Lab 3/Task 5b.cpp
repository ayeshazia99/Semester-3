#include<iostream>
using namespace std;
//to check if array is safe
bool safearray(int** arr, int x, int y, int n,int m){
    if(x<n && y<m && arr[x][y]==1){
        return true;
    }
    return false;
}
//recursion
bool Maze(int** arr, int x, int y, int n, int m, int** solArr){
    if(x==n-1 && y==m-1){
        solArr[x][y]=1;
        return true;
    }
    if(safearray(arr, x, y, n,m)){
        solArr[x][y]=1;
        if(Maze(arr, x+1, y, n, m, solArr)){
            return true;
        }
        if(Maze(arr, x, y+1, n,m, solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n,point=0,m;
    cout<<"Enter rows of maze:";
    cin>>n;
    int** arr=new int*[n];
    cout<<"Enter columns of maze:";
    cin>>m;
    for(int i=0; i<n; i++){
        arr[i]=new int[m];
    }
    cout<<"Enter 0 for blocked area, Enter 1 for opening in maze:";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    //Condition to check if whole matrix is 0
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==0){
        point++;
		   }
        }
    }
    if(point==m*n){
    cout<<"The maze has no way to start and end!";
	}
    else{
    int** solArr=new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<m; j++){
            solArr[i][j]=0;
        }
    }
    cout<<"The solution path is : "<<endl;
    if(Maze(arr, 0, 0, n, m, solArr)){
        for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<solArr[i][j];
        }cout<<endl;

        }
    }
    return 0;
}}
