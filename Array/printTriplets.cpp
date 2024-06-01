#include<iostream>
using namespace std;

//code for printing triplets without repeating the same element
//TC -> O(n^3)
//SC -> O(1)
void printTriplets(int arr[],int size,int target){

    for(int i = 0; i < size; i++){

        for(int j = i+1; j < size; j++){

            for(int k = j+1; j < size; j++){

                if(arr[i] + arr[j] + arr[k] == target){
                    cout<< arr[i] <<","<< arr[j] <<","<< arr[k]<<endl;
                }
            }
        }
    }
}

int main(){
    int arr[] = {10,20,30,40};
    int target = 70;
    int size = sizeof(arr) / sizeof(arr[0]);

    printTriplets(arr,size,target);

    return 0;
}