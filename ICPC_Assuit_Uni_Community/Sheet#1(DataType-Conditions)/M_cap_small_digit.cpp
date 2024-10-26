#include<iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    int b = a;
    if (b>=48 && b<=57){
        cout << "IS DIGIT\n";
    }
    else if(b>=65 && b<=90){
        cout << "ALPHA\n" << "IS CAPITAL";
    }
    else if(b>=97 && b<=122){
        cout << "ALPHA\n" << "IS SMALL";
    }   
    return 0;
}