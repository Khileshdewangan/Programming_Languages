#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is " << *ptr << endl;

    float *k = new float(55.232);
    cout << "the value of k is : " << *k << endl;

    int *arr = new int[4];
    arr[0] = 20;
    *(arr+1) = 55;
    arr[2] = 42;
    arr[3] = 22;
    // delete[] arr;
    cout << "the value of arr[0] is : " << arr[0] << endl;
    cout << "the value of arr[1] is : " << arr[1] << endl;
    cout << "the value of arr[2] is : " << arr[2] << endl;
    cout << "the value of arr[3] is : " << arr[3] << endl;
    return 0;
}
