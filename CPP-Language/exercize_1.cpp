#include <iostream>
#include <cmath>
using namespace std;
class simple_calsi
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter the first number : " << endl;
        cin >> a;
        cout << "enter the second number : " << endl;
        cin >> b;
    }
    void perform_simple()
    {
        cout << "the value of a + b is : " << a + b << endl;
        cout << "the value of a - b is : " << a - b << endl;
        cout << "the value of a * b is : " << a * b << endl;
        cout << "the value of a / b is : " << a / b << endl;
    }
};
class sciencalsi
{
    int a, b;

public:
    void getdata()
    {
        cout << "enter the first number : " << endl;
        cin >> a;
        cout << "enter the second number : " << endl;
        cin >> b;
    }
    void perform_scienc()
    {
        cout << "the value of sin(a) is : " << sin(a) << endl;
        cout << "the value of cos(a) is : " << cos(a) << endl;
        cout << "the value of exp(a) is : " << exp(a) << endl;
        cout << "the value of tan(a) is : " << tan(a) << endl;
    }
};
class hybrit : public simple_calsi, public sciencalsi
{
    public:
    void getdata(){
        simple_calsi::getdata();
    }
};
int main()
{
    // simple_calsi calc;
    // sciencalsi calc;
    // calc.getdata();
    // calc.perform();
    hybrit calc;
    calc.getdata();
    calc.perform_scienc();

    return 0;
}
