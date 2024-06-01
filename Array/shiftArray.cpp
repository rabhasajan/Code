#include<iostream>
using namespace std;
void shiftArray(int arr[],int size,int shift){
   
   int finalShift = shift % size;

    if(finalShift == 0){//if this condition exits the do nothing just return
        return ;
    }
    //step1:copy last shift elements to temp array
    int temp[10000];
    int index = 0;
    for(int i = size-finalShift ; i < size; i++){
        temp[index] = arr[i];
        index++;
    }
    //step2: shift array elements by finalShift places
    for(int i = size-1; i >= 0; i--){
        if( i-finalShift >= 0){
             arr[i] = arr[i - finalShift];
        }
       
    }
    //step3:copy temp elements
    for(int i = 0; i < finalShift; i++){
        arr[i] = temp[i];
    }

    
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift;
    cout<<"enter the number of places to be shifted: "<<endl;
    cin>>shift;
    //array before shifting
    cout<<"array before shifting:"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    shiftArray(arr,size,shift);

    //printing array after shifting
    cout<<"array after shifting: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}