#include <iostream>
using namespace std;
class test
{
    int b;
    int a;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2 * j)
    test(int i, int j) : b(j), a(i+b)
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
    }
};
int main()
{
    test t(3, 6);
    return 0;
}
