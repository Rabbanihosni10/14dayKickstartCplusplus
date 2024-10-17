#include<iostream>
using namespace std;
int main()
{
    int ct=0;
    for(int i=0;i<5;i++){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if (a==1 || e==1){
            if (i==0 || i==4){
                ct=4;
            }
            else if(i==1 || i==3){
                ct=3;
            }
            else{
                ct=2;
            }

        }
        else if (b==1 || d==1){
            if (i==0 || i==4){
                ct=3;
            }
            else if(i==1 || i==3){
                ct=2;
            }
            else{
                ct=1;
            }
        }
        else{
            if (i==0 || i==4){
                ct=2;
            }
            else if(i==1 || i==3){
                ct=1;
            }
            else{
                ct=0;
            }
        }
    }
    cout << ct;
    return 0;
}