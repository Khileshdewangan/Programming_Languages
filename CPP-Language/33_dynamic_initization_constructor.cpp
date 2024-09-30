#include <iostream>
using namespace std;
class Bankdeposit
{
    int principal;
    int year;
    float interstrate;
    float returnvalue;

public:
    Bankdeposit(){};    
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};
Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interstrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interstrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interstrate);
    }
}
void Bankdeposit::show()
{
    cout << "principal amount was " << principal
         << " return value after " << year << " year is " << returnvalue << endl;
}
int main()
{
    Bankdeposit bd1, bd2;
    int p, y;
    float r;
    int R;
    cout << "enter the value of p,y and r : ";
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p,y and R : ";
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();
    return 0;
}