#include <iostream>
using namespace std;
class complex
{
    int real, imagnary;

public:
    void getdata()
    {
        cout << "the value of real is : " << real << endl;
        cout << "the value of imagnary is : " << imagnary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imagnary = b;
    }
};
int main()
{
    complex c1;
    // complex *ptr = &c1;
    // c1.setdata(3, 5);
    complex *ptr = new complex[4];
    // (*ptr).setdata(5, 8);
    ptr->setdata(8, 15);
    ptr->getdata();
    // (*ptr).getdata();
    return 0;
}
