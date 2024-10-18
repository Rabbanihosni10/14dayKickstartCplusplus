#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=10;i++){
        if(i==5){
            // break;  #stop the whole loop
            continue;  //#only skip  a specific stage of a loop 
        }
        cout << i << "\n";
    }
    return 0;
}