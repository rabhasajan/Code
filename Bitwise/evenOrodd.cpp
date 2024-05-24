#include<iostream>
using namespace std; 

int main(){
    int input;
    cin>>input;

    if((input & 1) == 0){
        cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }

    return 0;
}