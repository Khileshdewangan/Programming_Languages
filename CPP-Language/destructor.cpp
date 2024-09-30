#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for obect number." << count << endl;
    }
    ~num()
    {
        cout << "this is the time when distructor is called for obect number." << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside the main function" << endl;
    cout << "creating first n1 objects" << endl;
    num n1;
    {
        cout << "entering the block" << endl;
        cout << "creating two more  objects" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "back to main objects" << endl;
    return 0;
}
