
#include <iostream>
using namespace std;
class employee
{ 
    int salary;
    int id;

public:
    void getid()
    {
        salary = 1500;
        cout << "enter the id of employee  : ";
        cin >> id;
    }
    void putdata()
    {
        cout << "id of employee is : " << id << " and salary is :" << salary << endl;
    }
};
int main()
{
    employee khilesh[5];
    for (int i = 0; i < 5; i++)
    {
        khilesh[i].getid();
        khilesh[i].putdata();
        /* code */
    }

    return 0;
}
