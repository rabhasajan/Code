#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int> first;
    stack<int> second;

    first.push(1);
    first.push(2);

    second.push(1);
    second.push(2);

    first.swap(second);
    cout<<first.top()<<endl;
    first.pop();
    cout<<first.top();
    
    
    
    
    
    
    //stack and queue cannot be iterated
    //creation
    // stack<int> st;

    // //insertion
    // st.push(1);
    // //1
    // st.push(2);
    // //1->2
    // st.push(3);
    // //1->2->3

    // cout<<st.size()<<endl;
    // st.pop();
    // //1->2
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // st.pop();
    // //1
    // cout<<st.top()<<endl;

    // if(st.empty() == true){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }

    


    return 0;
}