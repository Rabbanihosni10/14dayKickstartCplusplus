#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin >> a;  //3
    int defline=6;
    int odd_ct=0;
    // calculate the 1st tree lines
    for(int i=1;i<=a;i++){
        if (i>1 && i%2!=0){
            odd_ct+=1;
        }
        else{
            continue;
        }
    }
    // cout << odd_ct;
    int uppLine=defline+odd_ct;
    int sp=uppLine-1;
    int l=1;
    // cout << odd_ct << uppLine << sp <<"\n";
    // for (int i=1;i<=uppLine;i++){
    for (int i=1;i<=uppLine;i++){
        for(int j=1;j<=sp;j++){
            cout << " ";
        }
        for (int k=1;k<=l;k++){
            cout << "*";
        }
        l+=2;
        sp--;
        cout << "\n";
    }
    // cout << "\n";
    for (int i=1; i<=5;i++){
        for (int j=1; j<=5;j++){
            cout << " ";
        }
        for (int k=1; k<=a ; k++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
