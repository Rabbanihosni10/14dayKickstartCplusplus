#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    cin >> a;
    vector <int> mum;
    for (int i=1; i<=a; i++){
        long long int k;
        cin >> k;
        mum.push_back(k);        
    }
    int maxx=0;
    for(int i=0;i<a;i++){
        if (mum[i]>maxx){
            maxx=mum[i];
        }
    }
    cout << maxx;
    return 0;
}