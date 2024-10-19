#include<iostream>
using namespace std;
int main()
{
    // int star=5;
    int star=1;
    for (int i=1;i<=5;i++){
        // cout << i*'*';
        for(int j=1;j<=star;j++){
            // cout << "* ";
            cout << j << " ";
        }
        cout << "\n";
        // star--;
        star++;
    }
    return 0;
}

// *
// ** 
// ***
// ****
// *****