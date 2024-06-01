#include<iostream>
using namespace std;
//code to print triplets
//TC -> n^3
//SC -> O(1) space
void printAllTriplet(int arr[],int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                cout<< arr[i] << "," << arr[j] << "," << arr[k] <<endl;
                count++;
            }
        }
    }
    cout<<"total triplets:"<<count;
}

int main(){
    int arr[] = {10,20,30,40};
    int size = sizeof(arr) / sizeof(arr[0]);

    printAllTriplet(arr,size);

    return 0;
}