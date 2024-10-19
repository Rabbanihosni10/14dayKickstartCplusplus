#include<iostream>
using namespace std;
int main()
{
    //using while loop to print a-z and which charecter is vowel or consonent will also be published
    char ch='a';
    while(ch <= 'z'){
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout << ch << " " << "- Vowel" << "\n";
        }
        else{
            cout << ch << " " << "- consonent" << "\n";// code 
        }
        ch++;//incement / decrement
    } 
    return 0;
}
