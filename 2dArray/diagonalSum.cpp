#include<iostream>
using namespace std;


void input(int arr[][3],int rowSize,int colSize){
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            cin>>arr[row][col];
        }
    }
}
//this code is to find diagonal wise sum in an 2d array
void diagonalSum(int arr[][3],int rowSize,int colSize){
    int sum = 0;

    for(int col = 0; col < colSize; col++){
        for(int row = 0 ; row < rowSize; row++){
           if(row == col){
             sum = sum + arr[row][col];
           }
        }
        
    }
    cout<< sum <<endl;
}
int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    cout<<"enter inputs:"<<endl;
    input(arr,rowSize,colSize);
    diagonalSum(arr,rowSize,colSize);

    return 0;
}