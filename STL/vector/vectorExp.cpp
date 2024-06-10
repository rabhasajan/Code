#include<iostream>
#include<vector> //this includes vector methods
using namespace std;

int main(){

    vector<int> first;
    // vector<int> second;

    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    //traversing the array using iterator
    vector<int>::iterator it = first.begin();

    while(it != first.end()){
        cout<< *(it) <<" ";
        it++;
    }

    // second.push_back(3);
    // second.push_back(4);

    // first.swap(second);//this method can swap values from array to array
    // // cout<<first[0] <<" " <<first[1] <<endl;

    // for(int i: first){ //for each loop
    //     cout<< i<<" ";
    // }
    // cout<<endl;

    // for(int i: second){ //for each loop
    //     cout<< i<<" ";
    // }



    // vector<int> arr; //(5,0);//vector declaration,array size 5 with 0 initialized

    // cout<<arr.max_size()<<endl;//this will give you the max capacity of vector array
    // arr.reserve(10);//using this method we assign some blocks in array 
    // cout<<arr.capacity()<<endl;


    // arr.push_back(1);
    // arr.push_back(2);//method to insert values
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);

    // cout<<arr.size()<<endl;;
    // arr.erase(arr.begin(),arr.end());//this will erase in the range from start to end
    // cout<<arr.size()<<endl;;
    
    // arr.clear();//this will clear all your array elements
    // arr.insert(arr.begin(),9);//this is a method to insert at any position
    // cout<<arr[0]<<endl;
    // cout<<arr.capacity()<<endl; //this method checks the capacity of array
    // arr[0] = 10; //this way of accessing array using []brackets only works
    // //in an vector array atleast if the array size is initialised
    // cout<<arr[0]<<endl;//ways of accessing vector arrays
    // cout<<arr.at(0)<<endl;//ways of accessing vector arrays






    // cout<< *(arr.begin())<< endl;//(arr.begin() indicates the 0th position in an array
    // //and adding *(arr.begin()) indicates value at that position
    // cout<<"size: "<<arr.size()<<endl;//this will print the array size

    // arr.pop_back(); //this will remove 5 from the array
    // cout<<"size: "<< arr.size()<< endl;
    // cout<< arr.front()<< endl;//this will print the starting value
    // cout<< arr.back()<< endl;//thid will print the lst value


    // if(arr.empty() == true){ //this line will check if the array is empty
    //     cout<<"the vector is empty";
    // }
    // else{
    //     cout<<"the vector is not empty";
    // }

    return 0;
}