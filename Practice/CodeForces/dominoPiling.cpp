#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int area=a*b;
    int max=0;
    if (area%2==0){
        max+=area/2;
    }
    else{
        max+=(area-1)/2;
    }
    cout << max;
    return 0;
}