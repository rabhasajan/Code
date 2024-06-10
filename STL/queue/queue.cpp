#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> first;
    queue<int> second;

    first.push(1);
    first.push(2);

    second.push(3);
    second.push(4);

    first.swap(second);

    cout<<first.front() <<" "<<first.back()<<endl;









    //creation
    // queue<int> q;

    // q.push(1);
    // //1
    // q.push(2);
    // //1->2
    // q.push(3);
    // //1->2->3

    // q.pop();

    // cout<<q.size()<<endl;


    // cout<<"front-> "<<q.front()<<" "<<"back-> "<<q.back()<<endl;

    // if(q.empty() == true){
    //     cout<<"queue is empty"<<endl;
    // }
    // else{
    //     cout<<"queue is not empty"<<endl;
    // }

    // cout<< q.size()<<endl;





    return 0;
}