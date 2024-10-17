#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    int b=0;
    cin >> a;
    for(int i=1; i<=a;i++){
        int aa,bb,cc;
        int ct=0;
        cin >> aa >> bb >> cc;
        ct+=aa+bb+cc;
        if(ct>=2){
            b+=1;
        }
    }
    cout << b;
    return 0;
}