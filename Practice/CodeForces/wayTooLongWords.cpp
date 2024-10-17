#include<iostream>
#include<string>
using namespace std;
int main()
{
    int b;
    cin >> b;
    for(int a=0; a< b; a++){
        string str;
        cin >> str;
        int len=str.length();
        if (str.length()<=10){
            cout << str << "\n";
        }
        else{
            int ki=0;
            for(int i=2;i<len;i++){
                ki+=1;
            }
            cout << str[0] << ki << str[len-1]<< "\n";
            // string len=str.length();
        }
    }
}