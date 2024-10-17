//User will give a number in the system
//The system will decide if the number is even or odd
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num%2==0){
        cout << "The num is Even!";
    }
    else {
        cout << "The number is ODD";
    }
    return 0;
}