//Pirnting Table

// #include<iostream>
// using namespace std;
// void printTable(int n);

// //for using this way function must be declared before 
// int main(){

//     printTable(5);
//     return 0;
// }
// void printTable(int n){
//     for( int i = 1 ; i <= 10;i++){
//         cout<<n * i<<endl;
//     }
// }
//**************************************
// checking Prime

// #include<iostream>
// using namespace std;
// bool isPrime(int input){
//     for(int i = 2; i <= (input-1); i++){
//         if( input % i == 0){

//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }

// int main(){
//     int input;
//     cin>>input;
//     bool ans = isPrime(input);
//     if( ans == true){
//         cout<<" prime";
//     }
//     else
//     cout<<" notPrime";
//     return 0;
// }

//**************************************
// checking and printing odd and even using bitwise and operator

// #include<iostream>
// using namespace std;

// void printEvenInsideRange(int start,int end){
//     for( int i = start; i< end ; i++){
//         int number = i;
//         if(!(number & 1 )){ //to print odd number remove "!" symbol 
//             cout<< number<<endl;
//         }
//     }
// }
// int main(){
//     printEvenInsideRange(10,30);

//     return 0;
// }
//***************************************
// calculating percentage

// #include<iostream>
// using namespace std;
// float calculatePercentage(int sub1,int sub2, int sub3, int sub4,int sub5){
//     int sum = sub1 + sub2 + sub3 + sub4 + sub5;
//     int totalMarks = 500;

//     float percentage = (sum * 100.0)/500;
//     return percentage;

// }
// int main(){

//     float finalPercentage =  calculatePercentage(87,93,77,69,85);
//     cout<<finalPercentage;

//     return 0;
// }
//*************************************

#include<iostream>
using namespace std;
int main(){
int ans =  9 ^ 9;

cout<<ans;
    return 0;
}