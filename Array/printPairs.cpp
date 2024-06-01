// 
#include<iostream>
using namespace std;
//code for printing pairs in an array
void method1(int arr[],int size){

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< arr[i] <<","<< arr[j] <<endl;
        }
    }
}
void method2(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            cout<< arr[i] <<","<<arr[j]<<endl;
        }
    }
}
void method3(int arr[], int size){

    for(int i = 0; i < size;i++){
        for(int j = 0; j < i;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
void method4(int arr[], int size){
    
    for(int i = 0; i < size;i++){
        for(int j = 0; j <= i;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
void method5(int arr[],int size){
    
    for(int i = 0; i < size;i++){
        for(int j = size-1; j >=0; j--){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
void method6(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = size-1; j > i ;j--){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
void method7(int arr[],int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size;j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    //this functions will print different all possible pairs in an array
    // method1(arr,size);

    // method2(arr,size);

    // method3(arr,size);

    // method4(arr,size);

    // method5(arr,size);

    // method6(arr,size);

    method7(arr,size);

    return 0;
}