#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var1 " << var_base << endl;
    }
};
class DeriveClass : public BaseClass
{
public:
    int var_derived;
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
    base_class_pointer->var_base = 52;
    // base_class_pointer->var_derived = 152; // will throw error
    base_class_pointer->display();
    base_class_pointer->var_base = 1152;
    base_class_pointer->display();

    DeriveClass *derive_class_pointer;
    derive_class_pointer = &obj_derived;
    derive_class_pointer->var_derived = 65;
    // derive_class_pointer->var_base = 165;
    derive_class_pointer->display();

    return 0;
}
