// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];

//     //taking array input
//     for(int index =0; index < 5 ; index++ ){
//         cin>> arr[index];
//     }

//     //printing array input
//     for( int index = 0; index < 5; index++){
//         cout<< arr[index]<<" ";
//     }

//     return 0;
// }

//*****************************
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"insert input size"<<endl;
//     int input;
//     int arr[input];
//     //taking input this way is bad practice
//     //this code doesn't work but even it work on diff compiler it is a bad practice
//     for(int index = 0 ; index < input; index++)
//     {
//     cin >> arr[index];
//     }


//     return 0;
// }
//**************************

// #include<iostream>
// using namespace std;

// //passing array and array size through function arguements

// void  printArray(int arr[], int size){

//     for(int index = 0; index < size;index++){
//         cout<<arr[index]<<" ";
//     }
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     printArray(arr,size);

//     return 0;
// }

//**************************************
// #include<iostream>
// using namespace std;

// //passing array is always pass by reference which works with the actual value
// //and the size we are passing with the array is pass by value

// void printArray(int arr[],int size){
//     arr[0] = 10; //in this line the actual value is repalced by 10
//                     //which is an example of pass by reference
//     for(int index = 0 ;index < size; index++){
//         cout<<arr[index]<<" ";
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     printArray(arr,size);

//     return 0;
// }

//************************************************
