#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>> arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cin>>arr[i][j];
        }
    }
}
bool findTarget(vector<vector<int>> arr,int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();

     for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>> arr (3,vector<int>(3,0));
    //2d vector initialization
    cout<<"enter inputs:"<<endl;
    taking input this way is working and can find the desired target
     int rowSize = arr.size();
     int colSize = arr[0].size();

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cin>>arr[i][j];
        }
    }
    // input(arr);//in this way target cannot be found
    int target;
    cout<<"enter your target to find:";
    cin>>target;

    bool ans = findTarget(arr,target);
    cout<<ans;
    // if(ans == 1){
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"target failed";
    // }

    

    return 0;
}