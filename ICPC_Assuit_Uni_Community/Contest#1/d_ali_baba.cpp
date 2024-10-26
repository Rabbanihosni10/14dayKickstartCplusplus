#include<iostream>

using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    

    if ((((a + b) - c) == d) || ((a + (b - c)) == d) || (((a - b) + c) == d) || ((a - (b + c)) == d) ||
        (((a * b) - c) == d) || ((a * (b - c)) == d) || (((a - b) * c) == d) || ((a - (b * c)) == d) ||
        (((a + b) * c) == d) || ((a + (b * c)) == d) || (((a * b) + c) == d) || ((a * (b + c)) == d)) {
        cout << "YES";
    }
    else if((a+b)==(d/c) || (b*c)==d-a || )
    else {
        cout << "NO";
    }
    
    return 0;
}
