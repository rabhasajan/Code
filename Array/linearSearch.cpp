#include<iostream>
using namespace std;
//code for linear search
bool linearSearch( int arr[], int size, int target){

    for(int index = 0;index < size; index++){
        if(arr[index] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 4;
    bool ans = linearSearch(arr, size, target); 
        if(ans == true){
            cout<<"target found";
        }

    return 0;
}