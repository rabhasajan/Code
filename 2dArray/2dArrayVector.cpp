#include<iostream>
#include<vector>//this headerfile includes vector methods
using namespace std;
int main(){

    //creating 2dArray using vector
    vector<vector<int>> arr (3,vector<int>(3,1));
    int rowSize = arr.size();// way to find row size using sizefunction from vector
    int colSize = arr[0].size();// way to find col size for 2d array
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}