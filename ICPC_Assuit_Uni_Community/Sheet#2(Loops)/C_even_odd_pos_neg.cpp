#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> lst;
    for (int i=1; i<=a; i++){
        int val;
        cin >> val;
        lst.push_back(val);
    }
    int pos=0;
    int neg=0;
    int odd=0;
    int even=0;
    for(int i=0; i<a; i++){
        if(lst[i]<0){
            neg++;
        }
        if(lst[i]>0){
            pos++;
        }
        
        if(lst[i]%2==0){
            even++;
        }
        if(lst[i]%2!=0){
            odd++;
        }
    }   
    cout << "Even: " << even << "\n" << "Odd: " << odd << "\n" <<  "Positive: " << pos << "\n" << "Negative: " << neg;
    return 0;
}