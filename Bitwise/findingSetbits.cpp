#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    int lastBitCount = 0;
    while(number != 0){
        int lastBit = (number & 1);// performing and operation
        if(lastBit == 1){
            lastBitCount++;//or use lastBitCount = lastBitCount+1;
        }
       number = number>>1;


    }
    cout<<lastBitCount;

    return 0;
}