//patterns

// #include<iostream>
// using namespace std;
// int main()
//{
//     for(int i = 1; i < 5; i++){

//         for(int j = 1; j < 5; ++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0; // square pattern
// }

//***********************************************
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row = 1 ; row < 4; row++){
//         for(int j = 1; j < 6; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0; // rectangle pattern
// }

//********************************
// #include<iostream> //rectangular hollow pattern
// using namespace std;

// int main(){
//     int length;
//     int width;
//     cout << "Enter length" << endl;
//     cin >> length;

//     cout << "Enter width " << endl;
//     cin >> width;

//     //outer
//     for(int row = 0; row < length; row = row + 1 ) {
//         //inner 
//         for(int col = 0; col < width; col = col + 1) {
//             //first and last row me all stars
//             if(row == 0 || row == length-1) {
//                 cout << "* ";
//             }
//             else {
//                 //middle rows
//                 if(col == 0 || col == width-1) {
//                     cout << "* ";
//                 }
//                 else {
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }

//  return 0;
// }
//***************************************
// pattern for hollow square
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "enter the length of side of a square" << endl;
//     cin >> n;

//     for(int row = 0; row < n; row++){

//         for(int col = 0; col < n; col++){

//             if( row == 0 || row == n-1 || col == 0 || col == n-1)
//                 cout<<"* ";
//             else
//                 cout<<"  ";

//             }
//             cout<<endl;
//         }
        
//     return 0;
// }
//************************************
// pattern for half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     for(int row = 0; row < 10; row++){
//        for(int col = 0; col < row+1; col++){

//         cout<<"* ";
//       }
//       cout<<endl;
//     }

//     return 0;
// }
//**********************************
//pattern for upside down pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the pyramid size";
//     cin>>size;

//     for(int  row = 0; row < size; row++){
//         for( int col = size; col > row; col--){// for(int col=0;col<size-row;col++)alternate formula
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//*****************************
// pattern for hollow half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;
//     for(int row=0; row < size;row++ ){
//         for(int col =0; col < row+1; col++){
//             int colSize = row+1;
//             if(row == 0 || row == size-1 || col == 0 || col == colSize-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//************************************
//pattern for inverted hollow pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;

//     for(int row =0; row < size; row++ ){

//         for(int col = 0; col < size-row; col++ ){

//             int colSize = size-row;
//             if(row == 0 || row == size-1 || col == 0 || col == colSize-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }


//     return 0;
// }
//***************************************

//pattern for full pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter the row size"<<endl;
//     cin>>size;

//     for(int row = 0; row < size; row++){

//         for(int col = 0; col < size-row-1; col++){
//             cout<< " ";
//         }
//         for(int col = 0; col < row+1; col++){
//             cout<< "* ";
           
//         }
//          cout<<endl;
//     }

//     return 0;
// }

//**************************
//pattern for inverted pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the row size"<<endl;
//     cin>>size;

//     for(int row = 0; row < size; row++){

//         for(int col = 0; col <  row; col++){
//             cout<< " ";
//         }
//         for(int col = 0; col <size-row; col++){
//             cout<< "* ";
           
//         }
//          cout<<endl;
//     }

//     return 0;
// }
//*********************************************
//patteren for diamond

// #include<iostream>
// using namespace std;

// void pyramid(int size){
//      for(int row = 0; row < size; row++){

//         for(int col = 0; col < size-row-1; col++){
//             cout<< " ";
//         }
//         for(int col = 0; col < row+1; col++){
//             cout<< "* ";
           
//         }
//          cout<<endl;
//     }
// }
// void invertedPyramid(int size){
//      for(int row = 0; row < size; row++){

//         for(int col = 0; col <  row; col++){
//             cout<< " ";
//         }
//         for(int col = 0; col <size-row; col++){
//             cout<< "* ";
           
//         }
//          cout<<endl;
//     }
// }
// void diamond(int size){
//     pyramid( size);
//     invertedPyramid(size);
// }

// int main(){
//     int size;
//     cout<<"enter the  size you wish to build"<<endl;
//     cin>>size;
//     diamond(size);

//     return 0;
// }

//***********************************************
// pattern for full hollow pyramid

// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;

//     for(int row = 0; row < size; row++){
//         for(int col = 0; col < size-row-1; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col < row+1; col++ ){
//             int colSize = row+1;
//             if( row == 0 || row == size-1 || col == 0 || col == colSize-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//**************************************************
// pattern for inverted hollow pyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;
//     for( int row = 0; row < size ; row++){

//         for(int col = 0; col < row; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col <size-row; col++){
//             int colSize = size-row;
//             if(row == 0 || row == size-1 || col == 0 || col == colSize-1 ){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//*************************************

//pattern for hollow diamond

// #include<iostream>
// using namespace std;
// //code for hollow pyramid
// void hollowPyramid(int size){
//     for(int row = 0; row < size; row++){
//         for(int col = 0; col < size-row-1; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col < row+1; col++ ){
//             int colSize = row+1;
//             if( row == 0 ||/* row == size-1 ||*/ col == 0 || col == colSize-1){ //for removing the last row
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }
// //code for inverted hollow pyramid

// void invertedHollowPyramid(int size){
    
//     for( int row = 0; row < size ; row++){

//         for(int col = 0; col < row; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col <size-row; col++){
//             int colSize = size-row;
//             if(/*row == 0  ||*/ row == size-1 || col == 0 || col == colSize-1 ){ // for removing the first row
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

// }
// void hollowDiamond(int size){
//     hollowPyramid(size);
//     invertedHollowPyramid(size);
// }

// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;
//     hollowDiamond(size);

//     return 0;
// }

//***********************************
// pattern for mixPyramid

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size you wish to build"<<endl;
//     cin>>size;

// // Part 1
//     for(int row = 0;row < size; row++){
//         for(int col = 0; col < size-row; col++){
//             cout<<"*";
//         }
//         for(int col = 0; col < 2*row+1; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col < size-row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// // Part 2
//     for(int row = 0;row < size; row++){
//         for(int col = 0; col < row+1; col++){
//             cout<<"*";
//         }
//         for(int col = 0; col < 2*(size-row)-1; col++){
//             cout<<" ";
//         }
//         for(int col = 0; col < row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// **************************************
//Fancy 12  half pattern

// #include<iostream>
// using namespace std;
// int main(){

//     int size;
//     cout<<"enter the size you wish to build"<<endl;
//     cin>>size;

//     for( int row = 0; row < size ;row++){

//         for(int col = 0; col < 2*row+1; col++){
           
//            if( col % 2 == 0){
//             cout<<row+1<<" ";
//            }
//            else{
//             cout<<"* ";
//            }
//     }
//     cout<<endl;
//  }

//     return 0;
// }
//********************************************
//fancy 12 full pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter the size you wish to build"<<endl;
//     cin>>size;

//     //code for part 1
//      for( int row = 0; row < size ;row++){

//         for(int col = 0; col < 2*row+1; col++){
           
//            if( col % 2 == 0){
//             cout<<row+1<<" ";
//            }
//            else{
//             cout<<"* ";
//            }
//     }
//     cout<<endl;
//  }
//  size--;
//  //code for part 2

// for( int row = 0; row < size ;row++){

//         for(int col = 0; col < 2*(size-row)-1; col++){
           
//            if( col % 2 == 0){
//             cout<<size-row<<" ";
//            }
//            else{
//             cout<<"* ";
//            }
//     }
//     cout<<endl;
//  }

//     return 0;
// }
//***************************************
//pattern for ABCBA

// #include<iostream>
// using namespace std;

// void ABCBA(int size){
//     for(int row = 0; row < size; row++){
//         char ch = 'A';
//         for(int col = 0; col < row+1; col++){
//             cout<<ch;
//             ch++;
//         }

//          ch--;
//          while(ch > 'A'){
//             ch--;
//             cout<<ch;
//          }
//         cout<<endl;
//     }
// }

// int main(){
//     int size;;
//     cout<<"enter the size you wish to build"<<endl;
//     cin>>size;
//     ABCBA(size);
//     return 0;
// }

// ************************** THE END ******************************