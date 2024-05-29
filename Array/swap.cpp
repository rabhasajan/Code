// #include<iostream>
// #include<algorithm> // this includes swap method
// using namespace std;
// //this code is for swapping two values using built in method
// int main(){
//     int a = 5;
//     int b = 8;
//     cout<<"before swapping "<<a<<" "<<b<<endl;
//     swap(a, b); //this is the swap method 
//     cout<<"after swapping "<<a<<" "<<b;

//     return 0;
// }
//*********************************
//using temp variable

// #include<iostream>
// using namespace std;
// int main(){

//     int a = 5;
//     int b = 7;
//     int temp = 0;
//     cout<<"before swapping "<<a<<" "<<b<<endl;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"after swapping "<<a<<" "<<b<<endl;
//     return 0;
// }
//****************************
//using arithmetic method

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 7;
//     int b = 9;
//     cout<<"before swapping "<<a<<" "<<b<<endl;
//     a = a + b; //this will store the total sum of a and b in a
//     b = a - b; //this will store the initial value a in b
//     a = a - b; // this will store the initial value of b in a
//     //so this way both the values of a and b have been swapped
//     cout<<"after swapping "<<a<<" "<<b; 

//     return 0;
// }
//**************************************
//swapping using XOR 
#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 6;
    cout<<"before swapping "<<a<<" "<<b<<endl;
    a = a ^ b; //this will store xor value of a and b that is 3
    b = b ^ a; // this line will  store the initial value of a that is 5 in b
    a = a ^ b; // this line will store the initial value of b that is 6 in a
    // this will swap  both the values 
    cout<<"after swapping "<<a<<" "<<b;

    return 0;
}
//***************************************
