#include<iostream>
using namespace std;

void print(int arr[],int size){

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"enter size:"<<" ";
    cin >> size;
    int *arr = new int[size];//declaring dynamic memory allocation in an array
    
    //for inserting values
    cout<<"insert array values:"<<" ";
    for(int i = 0; i < size; i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    cout<<"array values are:"<<" ";
     print(arr,size);

    return 0;
}