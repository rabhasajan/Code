#include<iostream>
using namespace std;

void input(int arr[][3],int rowSize,int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cin>>arr[i][j];
        }
    }
}
//this method transpose the matrix inside the same array
void transposeMatrix(int arr[][3],int rowSize,int colSize){

     for(int i = 0; i < rowSize; i++){
        for(int j = i ; j < colSize; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}


// //this method uses a new array to transpose a matrix
// void transpose(int arr[][3],int rowSize,int colSize){
//     int temp[100][100] = {0};
//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize;j++){
//             temp[i][j] = arr[j][i];
//         }
//     }
// }
void print(int arr[][3],int rowSize,int colSize){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {0};
    int rowSize = 3;
    int colSize = 3;
    cout<<"enter inputs:"<<endl;
    input(arr,rowSize,colSize);

    transposeMatrix(arr,rowSize,colSize);
    cout<<"after transpose: "<<endl;

    print(arr,rowSize,colSize);

    return 0;
}