#include <iostream>>
using namespace std;
// forword decration
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int realsum(complex, complex);
    int imgsum(complex, complex);
};
class complex
{
    int a, b;
    // individually declaring function as friend
    // friend int calculator ::realsum(complex p, complex q);
    // friend int calculator ::imgsum(complex p, complex q);

    // aliter--> declaring entier calculator class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
  
    void printnumber()
    {
        cout << "your no. is : " << a << " + " << b << "i" << endl;
    }
};
int calculator ::realsum(complex p, complex q)
{
    return p.a + q.a;
}
int calculator ::imgsum(complex p, complex q)
{
    return p.b + q.b;
}

int main()
{
    complex c1, c2, c3;
    c1.setnumber(2, 5);
    c1.printnumber();
    c2.setnumber(4, 8);
    c2.printnumber();

    calculator clasi;
    int res = clasi.realsum(c1, c2);
    cout << "sum of real parts of c1 and c2 : " << res << endl;
    int resi = clasi.imgsum(c1, c2);
    cout << "sum of imganary parts of c1 and c2 : " << resi << endl;
    return 0;
}
