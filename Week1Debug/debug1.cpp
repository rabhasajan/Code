#include<iostream>
using namespace std;


//Take input a character, print 1, if its a capital alphabet, 
// print 0, if its a lowercase alphabet, else print -1.
int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){ //added && operator in replace of ||
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}