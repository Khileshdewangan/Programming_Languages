#include <iostream>
using namespace std;
class simple
{
    int data1, data2, data3;

public:
    simple(int x, int y = 2, int c = 25)
    {
        data1 = x;
        data2 = y;
        data3 = c;
    }

    // complex(int x)
    // {
    //     a = x;
    //     b = 0;
    // }
    void display()
    {
        cout << "the point is : " << data1 << " + " << data2 << " + " << data3 << "i"
             << "" << endl;
    }
};
int main()
{
    simple s1(10);
    s1.display();

    // complex c2(5);
    // c2.display();

    // complex c3;
    // c3.display();

    return 0;
}