#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); // constrator declartion
    void printnumber()
    {
        cout << "your no. is : " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void) // this is default constrator is accepts no parameter 
{
    a = 5;
    cout << "hello khlesh" << endl;
    b = 8;
}
int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}