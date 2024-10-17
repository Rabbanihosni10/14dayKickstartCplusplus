// Value Operator Value = result
//Arithmatic Operator--> +, - , * , / , %
#include<iostream>
int main()
{
    int a=10;
    int b=20;
    int sum=a+b;
    int sub=b-a;
    int mul=a*b;
    int div=b/a;
    // int div1=5/2;  // c++ convert the decimal result of division into integer only
    double k=5;
    double l=2;
    double div1=k/l;
    // std::cout<<10+5;
    int toma=17;
    int kopa=3;
    std:: cout << toma/kopa <<" "<<toma%kopa; 
    std::cout<< sum << " " <<sub <<" " << mul << " " << div<< " " << div1;
    return 0;
}