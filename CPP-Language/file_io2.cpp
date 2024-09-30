#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // connect our flie using kout stream
    ofstream kout("sample.txt");

    // creating a name string and fillling it with the string by the user
    string name;
    cout << "enter a string : ";
    cin >> name;

    // writing a string in a file
    kout << name + " my name is ";

    kout.close();

    ifstream kin("sample.txt");
    string content;
    kin >> content;
    cout << "the content of this file is : " << content;
    getline(kin, content);

    kin.close();

    return 0;
}
