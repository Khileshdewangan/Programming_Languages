#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base=10;
    virtual void display()
    {
        cout << "displaying base class variable var1 " << var_base << endl;
    }
};
class DeriveClass : public BaseClass
{
public:
    int var_derived=20;
    void display()
    {
        cout << "displaying base class variable var_base : " << var_base << endl;
        cout << "displaying base class variable var_derived : " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DeriveClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->display();
    return 0;
}
