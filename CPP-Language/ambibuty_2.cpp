#include <iostream>
using namespace std;

// class base1
// {
// public:
//     void greet()
//     {
//         cout << "how are you ?" << endl;
//     }
// };

// class base2
// {
// public:
//     void greet()
//     {
//         cout << "kaise ho?" << endl;
//     }
// };

// class derived : public base1, public base2
// {
//     int a;

// public:
//     void greet()
//     {
//         base2::greet();
//     }
// };

class b
{
public:
    void say()
    {
        cout << "hello world " << endl;
    }
};

class d : public b
{
    int a;

public:
//     void say()
//     {
//         cout << "hello world my beautifull pepole " << endl;
//     }
};
int main()
{
    b b1;
    b1.say();
    d d1;
    d1.say();

    return 0;
}
