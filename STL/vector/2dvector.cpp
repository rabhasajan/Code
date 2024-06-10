#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr (3,vector<int>(3,0)); // 2d vector array creation
    //with 3 rows and 3 columns
    //initialised with 0
    int rowSize = arr.size();//this way we can take out rowsize
    int colSize = arr[0].size();//this way we can take out colsize


    //creation of jagged array
    vector<vector<int>> brr(4);

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);

    int rowSize = brr.size(); //calculated rowsize
    int colSize = brr[i].size(); //calculated colsize


    return 0;
}