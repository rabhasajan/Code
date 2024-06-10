#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> first;
    list<int> second;

    first.push_back(1);
    first.push_back(2);
    //1->2

    first.insert(first.begin(),100);
    //100->1->2

    first.erase(first.begin(),first.end());
    cout<<first.size()<<endl;

    // second.push_back(3);
    // second.push_back(4);

    // first.swap(second);

    // list<int>:: iterator it = first.begin();

    // while(it != first.end()){
    //     cout<< *(it)<<" ";
    //     it++;
    // }









    //creation
    // list<int> myList;

    // //insertion
    // myList.push_back(1);
    // // 1
    // myList.push_back(2);
    // // 1->2
    // myList.push_back(3);
    // //1->2->3
    // myList.push_back(4);
    // //1->2->3->4

    // myList.push_front(100);
    // //100->1->2->3->4

    // myList.pop_back();
    // //100->1->2->3
    // myList.pop_front();
    // //1->2->3
    // myList.push_back(1);


    // cout<<"before removing:"<<endl;
    // list<int>:: iterator it = myList.begin();

    // while(it != myList.end()){
    //     cout<< *(it)<<" ";
    //       it++;
    // }

    // myList.remove(1);
    // cout<<endl;
    // cout<<"after removing:"<<endl;
    // list<int>::iterator it2 = myList.begin();

    // while(it2 != myList.end()){
    //     cout<< *(it2)<<" ";
    //       it2++;
    // }





    // cout<< myList.front() <<endl;
    // cout<< myList.back() <<endl;



    // cout<<myList.size()<<endl;
    // myList.clear();
    // cout<<myList.size()<<endl;
    // myList.push_back(50);

    // if(myList.empty() == true){
    //     cout<<"the list is empty."<<endl;
    // }
    // else{
    //     cout<<"the list is not empty."<<endl;
    // }



    return 0;
}