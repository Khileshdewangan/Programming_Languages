#include <iostream>
using namespace std;
template <class t1, class t2>
float funavarge(t1 a, t2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class t>
void swapa(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = funavarge(5, 2.52);
    cout << "the avarge of these number is :" << a << endl;

    int x = 5, y = 7;
    swapa(x, y);
    printf("now a is : %d and b is : %d", x, y);
    return 0;
}
