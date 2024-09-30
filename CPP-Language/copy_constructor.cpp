#include <iostream>
using namespace std;
class number
{
    int a = 00;

public:
    number() {}
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy contructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is : " << a << endl;
    }
};
int main()
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();
    return 0;
}
