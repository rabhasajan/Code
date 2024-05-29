#include<iostream>
using namespace std;
//code for printing extreme vakues in an array using two pointer method
void printExtreme(int arr[],int size){
   int left = 0;
   int right = size-1;

   while(left <= right){
    cout<<arr[left]<<" ";
    left++;

    if(right > left){
     //this condition is for not printing 
    //  the last value twice if the array size is even
    cout<<arr[right]<<" ";
    right--;
    }



   }
}

int main(){
    int arr[] = {10,20,30,90,40,50,60};
    int size = 7;
    printExtreme(arr,size);
    return 0;
}