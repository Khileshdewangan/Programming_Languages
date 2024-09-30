#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_num(int a)
    {
        roll = a;
    }
    void print(void)
    {
        cout << "your roll no. is :"<<roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "<-----------------youe result -------------> " << endl
             << "maths marks : " << maths << endl
             << "physics marks: " << physics << endl;
    }
};

class sports : virtual public student 
{
protected:
    float score;

public:
    void set_score(float sr)
    {
        score = sr;
    }
    void print_score(void)
    {
        cout << "your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print();
        print_marks();
        print_score();
        cout << "your total score is :" << total << endl;
    }
};
int main()
{
    result harry;
    harry.set_num(420);
    harry.set_marks(78.0, 55);
    harry.set_score(6);
    harry.display();
    return 0;
}
