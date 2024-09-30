// multi level inheritance
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student::set_roll_num(int r)
{
    roll_num = r;
}
void student::get_roll_num()
{
    cout << "the roll no. is :" << roll_num << endl;
}

class exam : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtained in maths are : " << maths << endl;
    cout << "the marks obtained in physics are : " << physics << endl;
}

class result : public exam
{
    float percentege;

public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "your parcentage is : " << (maths + physics) / 2 <<"%"<< endl;
    }
};
int main()
{
    student s1;
    result harry;
    harry.set_roll_num(420);
    harry.set_marks( 80, 65);
    harry.display();
    return 0;
}
