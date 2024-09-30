#include <iostream>
using namespace std;
int main()
{
    int marks[] = {24, 99, 10, 55};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl
         << endl;
    int *p = marks;

   
    cout << "the value of *p ="<<*p  << endl;
    cout << "the value of *(p+1) ="<<*(p + 1) << endl;
    cout << "the value of *(p+2) ="<<*(p + 2) << endl;
    cout << "the value of *(p+3) ="<<*(p + 3) << endl;
     cout<<*p++<<endl;
    cout<<*++p<<endl;

    return 0;
}
