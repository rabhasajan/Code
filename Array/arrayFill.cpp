#include<iostream>
using namespace std;
int main(){

    int arr[4];
    fill( arr, arr+4, 100);
    cout<< arr[0] <<" " << arr[1] <<" " <<arr[2] <<" " <<arr[3];

// using fill method in array we can fill we can fill the entire array at once 
    return 0;
}