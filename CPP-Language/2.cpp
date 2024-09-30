#include <iostream>
using namespace std;
int c = 45;
int main()
{
    /*int num1, num2;
    cout << "enter the value:\n"; // << this is called insertion oprator
    cin >> num1;                  // >> this is called extraction oprator

    cout << "enter the value:\n";
    cin >> num2;
    cout<<num1+num2;*/
    int a, b, c;
    cout << "enter the value:\n";
    cin >> a;
    cout << "enter the value:\n";
    cin >> b;
    c = a + b;
    cout << "sum " << c;
    cout << "sum " << ::c;

    return 0;
}
