#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id = ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is = " << id << " and number of employee " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is = " << count << endl;
    }
};
// count is static data member
int employee::count = 10;

int main()
{
    employee harry, khilesh, ravi;
    harry.setdata();
    harry.getdata();
    employee::getcount();

    khilesh.setdata();
    khilesh.getdata();
    employee::getcount();

    ravi.setdata();
    ravi.getdata();
    employee::getcount();
    return 0;
}