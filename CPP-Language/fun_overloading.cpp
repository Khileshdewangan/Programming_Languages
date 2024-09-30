#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout<<"using 2 argument\n";
    return a+b;
}
int sum(int a, int b, int c)
{
    cout<<"using 3 argument\n";
    return a+b+c;
}
int main()
{
    cout<<"the sum of 6,7 is= "<<sum(6,7)<<endl;
    cout<<"the sum of 6,7,8 is= "<<sum(6,7,8)<<endl;
    return 0;
}