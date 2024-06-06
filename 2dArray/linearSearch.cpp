#include<iostream>
using namespace std;
 void input(int arr[][3],int rowSize,int colSize){
    //in the above line passing the col size is imp.
    //but passing the row size is choice
    // when converting 2d array to 1d array formula is c*i+j;
    //where c is total no. cols and i is index of row and j is colIndex
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cin>>arr[i][j];
        }
    }
}

bool findTarget(int arr[3][3],int rowSize,int colSize,int target){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
           if(arr[i][j] == target){
            return true;
           }
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    int target;
    
    cout<<"enter the inputs:"<<endl;
    input(arr,rowSize,colSize);
    cout<<"enter the target to find:";
    cin>>target;

    bool ans = findTarget(arr,rowSize,colSize,target);
    if(ans == 1){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }

    return 0;
}