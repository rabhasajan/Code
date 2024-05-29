#include<iostream>
#include<algorithm> //this headerfile includes the reverse() method
using namespace std;
//code for  reversing an array
void printReverse(int arr[],int size){ //reversing using two pointer method 
   int left = 0;
   int right = size-1;

//    while(left < right){ //beginners logic
//     swap(arr[left],arr[right]);
//     left++;
//     right--;
//    }

   //logic for OP coders
   while(left < right){
    swap(arr[left++] ,arr[right--]);
   }

//    for printing the array
   for(int index = 0; index < size; index++){
    cout<<arr[index]<<" ";
   }
}
// works for both odd and even array size
int main(){
    int arr[] = {1, 2, 3 ,8, 4, 5 };
    // int size = 6; //this way is to define size beginners way.
    int size = sizeof(arr) / sizeof(arr[0]);//OP way of calculating array size
    
    // printReverse(arr,size);// method -> 1

    reverse(arr, arr + size);//PRO way of reversing an array
    for(int index = 0; index < size; index++){
    cout<<arr[index]<<" ";
   }


    return 0;
}