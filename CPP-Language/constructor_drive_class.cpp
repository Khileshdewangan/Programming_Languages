#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constractor called " << endl;
    }
    void printdatbase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constractor called " << endl;
    }
    void printdatbase2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class derived : virtual  base2, virtual public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(b), base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constractor called " << endl;
    }
    void printdatderived(void)
    {
        cout << "the value of dataderived1 is " << derived1 << endl;
        cout << "the value of dataderived2 is " << derived2 << endl;
    }
};
int main()
{
    derived khi(1, 2, 3, 4);
    khi.printdatbase1();
    return 0;
}