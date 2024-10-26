#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a=='z'){
        cout << 'a';
    }
    else{
        char b= a+1;
        cout << b;
    }
    return 0;
}