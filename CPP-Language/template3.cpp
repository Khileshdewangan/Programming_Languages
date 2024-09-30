#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class khilesh
{
public:
    t1 a;
    t2 b;
    t3 c;
    khilesh(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of b is : " << c << endl;
    }
};
int main()
{
    khilesh<> k1(5, 3.6, 'k');
    k1.display();
    cout << endl;

    khilesh<char, char, float> k2('h', 'k',3.6);
    k2.display();

    return 0;
}
