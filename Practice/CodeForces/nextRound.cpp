#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int c=0;
    vector<int> player(a);
    for (int i=0; i<a; i++){
        cin >> player[i];     
    }
    for (int i=0; i<a; i++){
        int k=player[b-1];
        if (player[i]>=k && player[i]>0){
            c++;
        } 
    }
    cout << c;
    return 0;
}