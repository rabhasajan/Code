#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//this code is for using for_each loop using stl
void printDouble(int a) {
    cout << 2*a << " ";
}
//for checking even no
bool checkEven(int a){
    return  a%2 == 0;

}


int main() {

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 11;
    arr[4] = 11;

    //using count algoritm
    int target = 11;
    int ans = count(arr.begin(), arr.end(),target);
    cout<< ans <<endl;

    //using find_if algorithm
    // auto it = find_if( arr.begin(), arr.end(),checkEven);
    // cout<< *it <<endl;

    //  for_each(arr.begin(), arr.end(),printDouble);

     //for finding a value and printing using iterator and
     // auto is setting it automatically its type
    //  int target = 40;
    //  auto it = find(arr.begin(), arr.end(), target);
    //  cout<< *it <<endl;

     return 0;
}