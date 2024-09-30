#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 4, b = 6, c;
    cout << a << "\n"
         << b << "\n";
    swap(&a, &b);
    cout << a << "\n"
         << b << "\n";
    return 0;
}