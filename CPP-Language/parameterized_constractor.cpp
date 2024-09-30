#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); // constrator declartion
    void printnumber()
    {
        cout << "your no. is : " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) //this is parameterize constrator as it takes 2 parameter 
{
    a = x;
    b = y;
}
int main()
{
    // implicit call
    complex a(4, 6);

    // Explicit call
    complex b = complex(5, 7);
    a.printnumber();

    b.printnumber();
    return 0;
}
