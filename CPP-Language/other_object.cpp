
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatasum(complex A1, complex A2)
    {
        a = A1.a + A2.a;
        b = A1.b + A2.b;
    }
    void putdata()
    {
        cout << "complex no. is : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.putdata();
    c2.setdata(3, 4);
    c2.putdata();
    c3.setdatasum(c1, c2);
    c3.putdata();
    return 0;
}