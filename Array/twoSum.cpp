#include<iostream>
using namespace std;
//introduced returning of pair value
pair<int,int> checkTwoSum(int arr[], int size,int target){
    //here i have declared pair
    //initialising pair
    pair<int,int> ans = make_pair(-1,-1);//ans is a variable
    //make_pair(-1,-1) is an initialised value 
    // to know if target is not found
   
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){

            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }

        }

      }
      //agar yaha tak pohoch gye ho toh kuch bhi nhi mila 
      //hoga toh return pair(ans) karo
      return ans;
    
 }


int main(){
    int arr[] = {5,10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 37;
    pair<int,int> ans = checkTwoSum(arr, size, target);
    if(ans.first == -1 && ans.second == -1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"pair found: "<<ans.first<<","<<ans.second<<endl;
    }

    return 0;
}