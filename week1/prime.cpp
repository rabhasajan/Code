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

    for(int i=2; i<=100; i++){
        if (printPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
