#include <iostream>
using namespace std;
// base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34;
    }
    employee() {}
};
class programmer : public employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
// derived class
int main()
{
    employee khulesh(1), rohan(2);
    cout << khulesh.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    cout << skillf.id<< endl;
    skillf.getdata();
    return 0;
}
