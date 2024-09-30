#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}
int fib(int x)
{
    if (x < 2)
    {
        return 1;
    }
    return fib(x - 2) + fib(x - 1);
}
int main()
{
    int a;
    cout << "enter number = ";
    cin >> a;
    // cout << "factotial of "<<a<<" is =" << factorial(a);
    cout << "fibonachi " << a << " is =" << fib(a);
    return 0;
}
