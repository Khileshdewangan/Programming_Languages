#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void display()
    {
        cout << "the point is : " << a << " + " << b <<"i"<< "" << endl;
    }
};
int main()
{
    complex c1(4, 5);
    c1.display();

    complex c2(5);
    c2.display();

    complex c3;
    c3.display();

    return 0;
}