#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;
    friend void exchange(c1 &, c2 &);

public:
    void c1val(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void c1val(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.c1val(5);
    oc2.c1val(10);
    exchange(oc1, oc2);

    cout << "the value of c1 after exchage become :";
    oc1.display();
    cout << endl;
    cout << "the value of c1 after exchage become :";
    oc2.display();
    return 0;
}
