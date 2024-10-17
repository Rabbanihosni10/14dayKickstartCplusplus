#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ct=0;
    for(int i=0;i<=a;i++){
        string str;
        cin >> str;
        int s=str.length();
        for(int l=0;l<s-1;l++){
            if (str[l]== '+' && str[l+1]=='+'){
                ct+=1;
                l++;
            }
            else if (str[l]=='-' && str[l+1]=='-'){
                ct-=1;
                l++;
            }
        }
    }
    cout << ct;
    return 0;
}