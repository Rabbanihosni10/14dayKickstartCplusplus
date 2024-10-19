#include<iostream>
using namespace std;
int main()
{
    int star=1;
    for (int i=1;i<=20;i++){
        // cout << i*'*';
        for(int j=1;j<=star;j++){
            cout << '*';
        }
        cout << "\n";
        star++;
    }
    return 0;
}

// *
// ** 
// ***
// ****
// *****