#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    if (age > 130 || age<1)// || is or condition
    {
        cout << "Invalid Age";
    }
    else if (age >= 18)
    {

        cout << "You can vote";
    }
    else
    {
        cout << "you Cannot vote";
    }
    return 0;
}
