#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

void input(int arr[][3],int rowSize,int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cin>>arr[i][j];
        }
    }
}
//TC -> O(n^2)
//SC ->O(1)
int findMin(int arr[][3],int rowSize,int colSize){
    int minValue = INT_MAX;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            minValue = min(minValue,arr[i][j]);
        }
    }
    return minValue;
}
//TC -> O(n^2)
//SC ->O(1)
int findMax(int arr[][3],int rowSize,int colSize){
    int maxValue = INT_MIN;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            maxValue = max(maxValue,arr[i][j]);
        }
    }
    return maxValue;
}

int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    cout<<"enter inputs:"<<endl;
    input(arr,rowSize,colSize);

    // int ans = findMin(arr,rowSize,colSize);

    int ans = findMax(arr,rowSize,colSize);
    cout<<"the max value is: "<<ans;


    return 0;
}