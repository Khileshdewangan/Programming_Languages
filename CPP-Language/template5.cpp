#include <iostream>
using namespace std;
template <class T>
class khilesh
{
public:
    T data;
    khilesh(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void khilesh<T>::display()
{
    cout << data << endl;
}

void fun(int a)
{
    cout << "this is first fun() : " << a << endl;
}
template <class T>
void fun(T a)
{
    cout << "this is templatesid fun() : " << a << endl;
}
template <class T>
void fun1(T a)
{
    cout << "this is templatesid1 fun() : " << a << endl;
}
int main()
{
    // khilesh<int> h(5);
    // h.display();
    // cout << h.data << endl;
    // khilesh<float> h1(5.25);
    // h1.display();
    // khilesh<char> h2('k');
    // h2.display();
    fun1(4);
    fun(4);

    return 0;
}
