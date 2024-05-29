#include<iostream>
using namespace std;
//code for counting zeroes and ones
void countZeroOne(int arr[],int size){
    int countZero = 0;
    int countOne = 0;
    for(int index = 0; index < size ;index++){

        if(arr[index] == 0){
            countZero++;
        }
        if(arr[index] == 1){
            countOne++;
        }
    }
    cout<<"total zeroes are :"<<countZero<<endl;
    cout<<"total ones are :"<<countOne<<endl;
}
int main(){
    int arr[] = {0,0,1,0,1,0};
    int size = 6;

    countZeroOne(arr,size);
    return 0;
}