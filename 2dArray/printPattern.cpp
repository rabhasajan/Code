#include<iostream>
using namespace std;
//taking 2d array input using functionLoop

// void input(int arr[3][3],int rowSize,int colSize){
//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize; j++){
//             cin>>arr[i][j];
//         }
//     }
// }
//taking input column wise
void input(int arr[3][3],int colSize,int rowSize){
    for(int j = 0; j < colSize; j++){
        for(int i = 0 ; i < rowSize; i++){
            cout<<"enter the value for (" "col:"<< j << " , " "row:"<< i << " ):";
            cin>>arr[j][i];
        }
        cout<<endl;
    }
}
//printing row wise
// void print(int arr[2][2],int rowSize,int colSize){
//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
//printing col wise
// void print(int arr[2][2],int rowSize,int colSize){
//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize; j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }
//printing diagonally 
//TC -> O(n^2)
// void print(int arr[2][2],int rowSize,int colSize){
//     for(int i = 0; i < rowSize; i++){
//         for(int j = 0; j < colSize; j++){
//             if(i == j){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
//printing column wise
void print(int arr[3][3],int rowSize,int colSize){
    for(int j = 0; j < colSize; j++){
        for(int i = 0; i < rowSize;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]; //= {{1,2},{4,5}};
    int rowSize = 3;
    int colSize = 3;
    cout<<"taking input:"<<endl;
    input(arr,rowSize,colSize);
    cout<<"values are:"<<endl;
    print(arr,rowSize,colSize);

    //printing diagonally using single loop 
    //TC -> O(n)
    // for(int i = 0; i < rowSize ;i++){
    //     cout<<arr[i][i]<<" ";
    // }
    

    return 0;
}