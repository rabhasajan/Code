#include<iostream>
using namespace std;

int simpleInterest(int principle,int rate,int time){
    float simpleinterest = principle*rate*time/100;

    return simpleinterest;
}

int main(){
    int principle,rate,time;

    cout<<"Enter the details below to calculate simple interest:"<<endl;
    cout<<"Enter principle amount:"<<endl;
    cin>>principle;
    cout<<"Enter rate of interst:"<<endl;
    cin>>rate;
    cout<<"Enter time in years: "<<endl;
    cin>>time;

    float result = simpleInterest(principle,rate,time);
    cout<<"Simple Interest:"<<result<<endl;
    return 0;
}