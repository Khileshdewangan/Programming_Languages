#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample.txt");
    out << " ggggggggggggg this is my name \n";
    out << " khulesh dewangan ";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st, st2;
    // in >> st >> st2;
    // cout << st << st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st;
    }
    in.close();
    return 0;
}
