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
                break;
            }
            else if(i==1 || i==3){
                ct=3;
                break;
            }
            else if(i==2){
                ct=2;
                break;
            }

        }
        else if (b==1 || d==1){
            if (i==0 || i==4){
                ct=3;
                break;
            }
            else if(i==1 || i==3){
                ct=2;
                break;
            }
            else if(i==2){
                ct=1;
                break;
            }
        }
        else if(c==1){
            if (i==0 || i==4){
                ct=2;
                break;
            }
            else if(i==1 || i==3){
                ct=1;
                break;
            }
            else if(i==2){
                ct=0;
                break;
            }
        }
    }
    cout << ct;
    return 0;
}