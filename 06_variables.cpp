#include<iostream>
using namespace std;
int main(){
    int myNum = 20;// integer
    double myFloatnum = 17.66;//floating numbers
    char myLetter = 'D';//character
    bool myBoolen = true;//true or false
    string myString = "Hello";//text

    cout<<"I am "<<myNum<<" years old.\n";
    cout<<"My weight is "<<myFloatnum<<" kgs.\n";
    cout<<"My section is "<<myLetter<<" .\n";
    cout<<"The statement which I gave is "<<myBoolen<<" .\n";
    cout<<"I would like to say you "<<myString<<" .\n";
    //float vs. double

//The precision of a floating point value indicates how many digits the value can have after the
// decimal point. The precision of float is only six or seven decimal digits, while double
//variables have a precision of about 15 digits. Therefore it is safer to
// use double for most calculations.
    return 0;
}