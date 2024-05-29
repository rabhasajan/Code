#include<iostream>
using namespace std;
// code for sorting zeroes and ones in an array using counting method
void sortZeroOne(int arr[],int size){
    int countZero = 0;
    int countOne = 0;
    for(int index = 0; index < size; index++){
        if(arr[index] == 0){
            countZero++;
        }
        if(arr[index] == 1){
            countOne++;
        }
    }
    for(int index = 0; index < countZero; index++){
        arr[index] = 0;
    }
    for(int index = countZero; index < size; index++){
        arr[index] = 1;
    }
}

int main(){
    int arr[] = {1,0,0,0,1,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortZeroOne(arr,size);
    for(int index = 0;index < size; index++){
        cout<<arr[index]<<" ";
    }


    return 0;
}