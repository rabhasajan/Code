#include<iostream>
using namespace std;


void input(int arr[][3],int rowSize,int colSize){
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            cin>>arr[row][col];
        }
    }
}
//this code is to find column wise sum in an 2d array
void colSum(int arr[][3],int rowSize,int colSize){
    for(int col = 0; col < colSize; col++){
        int sum = 0;
        for(int row = 0; row < rowSize; row++){
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
    colSum(arr,rowSize,colSize);

    return 0;
}