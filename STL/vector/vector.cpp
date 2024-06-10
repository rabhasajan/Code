#include<iostream>
#include<vector> // this headerfile includes vector
using namespace std;

// void print(vector<char> v){
//     int size = v.size();
//     for(int i = 0; i < size; i++){
//         // cout<<v[i]<<" ";
//         cout<< v.at(i)<<" ";//another way of printing array using vector
//     }
// }
//another way of printing array using vector
void print1(vector<int> v){
    for(auto it:v){ //for each loop,it stores all the values from v and print it.
        cout<<it<<" ";
    }
}

int main(){

    vector<int> v ;
    v.push_back(1); //way to insert elements in  a vector array
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    print1(v);
    // cout<<endl;
    // v.pop_back();//way to pop elements from an array using vector
    // print(v);
    // //way to clear the full array
    // v.clear();

    // v.push_back(50);
    // cout<<endl;
    // print(v);
    // vector<int> arr(5,9);// way to initialize with some value
    // //size is always dynamic even you have defined the size
    // print(arr);
    // cout<<endl;
    // arr.push_back(90);
    //  print(arr);
     //another method to initialize array
    //  vector<int>arr1{1,2,3,4,5};
    //  print(arr1);
    //  //way to copy whole array into another array
    //  cout<<endl;
    //  vector<int>arr2(arr1);
    //  print(arr2);

    //initialize vector with char array
    // vector<char> arr;
    // arr.push_back('a');
    // arr.push_back('b');
    // arr.push_back('c');
    // print(arr);


    return 0;
}