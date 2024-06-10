#include<iostream>
using namespace std;


void input(int arr[][3],int rowSize,int colSize){
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            cin>>arr[row][col];
        }
    }
}
//this code is to find row wise sum in an 2d array
void rowSum(int arr[][3],int rowSize,int colSize){
    for(int row = 0; row < rowSize; row++){
        int sum = 0;
        for(int col = 0; col < colSize; col++){
            sum = sum + arr[row][col];
        }
        cout<< sum <<endl;
    }
}
int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    cout<<"enter inputs:"<<endl;
    input(arr,rowSize,colSize);
    rowSum(arr,rowSize,colSize);

    return 0;
}