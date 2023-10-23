#include<iostream>
using namespace std;
int main(){
    //do while loop
    // in do while loop, the program will be executed in a loop atleast once whether the condition is true or false.
int index = 0;
do{
    cout<<"We are at the index number : "<<index<<endl;
    index = index + 1;
}while(index<12);
//while(index>12)
    return 0;
}