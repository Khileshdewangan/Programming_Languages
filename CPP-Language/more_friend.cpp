#include <iostream>
using namespace std;
class y;
class x
{
    int data;
    friend void add(x, y);

public:
    int setvalue(int value)
    {
        data = value;
    }
};
class y
{
    int num;
    friend void add(x, y);

public:
    int setvalue(int value)
    {
        num = value;
    }
};
void add(x A1, y B2)
{
    cout << "summing data of x and y objects gives me :" << A1.data + B2.num;
}
int main()
{
    x a1;
    a1.setvalue(5);

    y b1;
    b1.setvalue(4);

    add(a1, b1);

    return 0;
}
