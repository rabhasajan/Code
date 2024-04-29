#include<iostream>
using namespace std;

void isEligible(int age){
  {
    if(age >= 18 ? cout<<"eligible for voting " : cout<<"not eligible for voting");
  }
  return;
}
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    isEligible(age);
    return 0;
}