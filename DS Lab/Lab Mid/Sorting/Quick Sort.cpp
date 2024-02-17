#include<iostream>
using namespace std;
int partition(int *arr, int LB, int UB){
int pivot = arr[LB];
int start = LB;
int end = UB;
while(start < end){
while(arr[start] <= pivot){
start++;
}
while(arr[end] >pivot){
end--;
}
if(start < end){
            swap(arr[start], arr[end]);
}
}
    swap(arr[LB], arr[end]);
return end;
}
void quick(int *arr, int LB, int UB){
if(LB < UB){
int num = partition(arr, LB, UB);
quick(arr, LB, num-1);
quick(arr, num+1, UB);
}
}
int main() {
int array[10] = { 19, 4, 21, 37, 2, 15, 9, 30, 50, 0};
quick(array, 0, 10);
cout<<"\nSorted array : ";
for(int x=0;x<10;x++){
cout<<array[x]<<" ";
}
}

