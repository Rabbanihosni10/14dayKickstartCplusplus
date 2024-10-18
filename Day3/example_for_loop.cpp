#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i =1;i<=n;i++){
        if (i%2==0){
            cout << i << "--" << "Even\n";

        }
        else{
            cout << i << "--" << "Odd\n";
        }
    }
    return 0;
}
//1 - odd
