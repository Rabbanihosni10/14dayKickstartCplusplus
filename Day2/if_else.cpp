// Conditional ==>
// if else ladder-->
// if(){
// }
// else if (){
// }
//else{
// }
//
//  Nested if else 090
#include<iostream>
using namespace std;
int main()
{
    // int tk=300;
    int tk=900;
    if (tk>=200){
        if (tk>=500){
            cout << "Burger + Pizza Khabo!";
        }
        else{
            cout << "only Burger Khabo!";
        }
    }
    else if (tk>=100){
        cout << "Fuchka";
    }
    else if (tk>=50){
        cout << "Chips";
    }
    else{
        cout << "No Burger Right Now!";
        cout << "\nHekko";
    }
    return 0;
}