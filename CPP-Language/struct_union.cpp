#include <iostream>
using namespace std;
typedef struct employee // total memory 9=4+1+4
{
    int eId;
    char favchar;
    float salary;
} ep;

union money // total memory 4=4+1+4
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    // struct employee khilesh;
    ep khilesh;
    khilesh.eId = 5;
    khilesh.favchar = 'c';
    khilesh.salary = 1000.500;
    cout << khilesh.eId << endl;
    cout << khilesh.favchar << endl;
    cout << khilesh.salary << endl;
    return 0;
}
