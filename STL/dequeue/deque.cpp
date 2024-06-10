#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    deque<int> dq;

    //insertion
    dq.push_back(1);
    //1
    dq.push_back(2);
    //1->2
    dq.push_back(3);
    //1->2->3

    dq.push_front(100);
    //100->1->2->3
    dq.push_front(50);
    //50->100->1->2->3
    dq.pop_back();
    //50->100->1->2
    dq.pop_front();
    //100->1->2

    dq.erase(dq.begin(),dq.end());
    cout<<dq.size()<<endl;

    // dq.insert(dq.begin(),99);
    // cout<<dq.at(0)<<endl;

    // cout<<dq.size()<<endl;
    // dq.clear();
    // cout<<dq.size()<<endl;


    // cout<<dq[0]<<" "<<dq.at(1)<<endl;

    // deque<int>:: iterator it = dq.begin();

    // while(it != dq.end()){
    //     cout<< *it<<" ";
    //     it++;
    // }
    
    // cout<<dq.size()<<endl;
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // if(dq.empty() == true){
    //     cout<<"deque is empty"<<endl;
    // }
    // else{
    //     cout<<"deque is not empty"<<endl;
    // }

    return 0;
}