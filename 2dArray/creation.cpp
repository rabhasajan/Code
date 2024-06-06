#include<iostream>
using namespace std;

int main(){
    // int arr[2][2];//declaration of 2d array

    //initialisation of an 2d array
    // int arr[4][3] = {{10,20,30},
    //                  {40,50,60},
    //                  {70,80,90},
    //                  {100,110,120}  };

    // int rowSize = 4;
    // int colSize = 3;
    // //accessing 2d array using loop
    // for(int row = 0; row < rowSize; row++){
    //     for(int col = 0; col < colSize; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }
    //if i half fill the array what will i get after printing
    int arr[2][2] = {10,20};
    int rowSize = 2;
    int colSize = 2;
    for(int row = 0; row < rowSize;row++){
        for(int col = 0; col < colSize;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
//output i get after printing the array is after the values it will print zeroes
//and if we don't initialize anything then it will also print zeroes 
    return 0;
}