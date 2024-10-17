//Print the max among the numbers User given(among his/her 3 choices)
#include<iostream>
using namespace std;
int main()
{
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  if (num1>=num2 && num1>=num3){
    cout << "Biggest number is , num1";
  }   
  else if( num2>= num1 && num2 >= num3){
    cout << "Biggest Number is ,num2";
  }
  else{
    cout << "The Buggest number is,num3";
  }
  return 0;
}

// FInd the max among 2
// find the min among 3
// find out the middle value