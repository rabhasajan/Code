#include<iostream>
using namespace std;

bool printPrime(int input){
    for(int i=2; i<=input/2; i++){
       if( input%i==0)
        {
            return false;
        }
        
    }
    return true;

}
int main(){

    for(int input=2; input<=100; input++){
        if (printPrime(input)){
            cout<<input<<" ";
        }
    }
    return 0;
}
