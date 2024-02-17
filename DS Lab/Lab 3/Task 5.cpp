#include<iostream>
using namespace std;
//to check if array is safe
bool safearray(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
//recursion
bool Maze(int** arr, int x, int y, int n, int** solArr){
    if(x==n-1 && y==n-1){ ///base case
        solArr[x][y]=1;
        return true;
    }
    if(safearray(arr, x, y, n)){
        solArr[x][y]=1;
        if(Maze(arr, x+1, y, n, solArr)){ //recursive call
            return true;
        }
        if(Maze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n,point=0;
    cout<<"Enter size of maze:";
    cin>>n;
    int** arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[n];
    }
    cout<<"Enter 0 for blocked area, Enter 1 for opening in maze:";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //Condition to check if whole matrix is 0
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(arr[i][j]==0){
        point++;
		   }
        }
    }
    if(point==n*n){
    cout<<"The maze has no way to start and end!";
	}
    else{
    int** solArr=new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }
    cout<<"The solution path is : "<<endl;
    Maze(arr, 0, 0, n, solArr);
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<solArr[i][j];
        }cout<<endl;

        }
    }
    return 0;
}
