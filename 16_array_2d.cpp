#include<iostream>
using namespace std;
int main(){
int arr2d[3][7]={
    {1,2,3},
    {4,5,6}
};
for (  int i = 0; i < 3; i++)
{
    for (int j = 0; j < 7; j++)
    {
        cout<<"The value at "<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;
    }
     
}


    return 0;
}