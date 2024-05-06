#include<iostream>
using namespace std;

void play(){
    cout<<"let's play"<<endl;
}
void roll(){
    cout<<"22mca018"<<endl;
}
namespace sajan{  //created namespace for personal scope
    void roll(){
        cout<<"22mca018"<<endl;
    }
    void registration(){
        cout<<"2214866"<<endl;
    }
}

int main(){
    play();
    roll();
    sajan::registration();
    sajan::roll();

    return 0;
}