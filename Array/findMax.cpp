#include<iostream>
#include<limits.h>//this header includes INT_MIN and INT_MAX function(-2^31 -> 2^31-1)
using namespace std;

int findMax(int arr[], int size){
    int maxAns = INT_MIN;
    for(int index = 0; index < size; index++){

        int maxAns = max(maxAns,arr[index]); //find max value using max function

        // if(  arr[index] > maxAns ){ //without using any function
        //     maxAns = arr[index];
        // }
    }
    return maxAns;
}

int main(){
    int arr[] = {10,52,89,23,58};
    int size = 5;
    int ans = findMax(arr,size);
    cout<<ans;

    return 0;
}