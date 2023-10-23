#include<iostream>
using namespace std;
// array in one dimension
int main(){
     int arr[3]= {5 ,6 ,8};
//array index    0  1  2 
// cout<<arr[2];
int marks[6];
for (int i = 0; i < 6; i++)
{
    cout<<"Enter the Marks of "<<i<<"th student"<<endl;
    cin>>marks[i];
    
}
for (int i = 0; i < 6; i++)
{
    cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    
}

return 0;
}