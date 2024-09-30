#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    // string st = "khilesh bhai";
    // ofstream out("sample.txt"); // write opration
    // out << st;

    string st2;
    ifstream in("sample2.txt"); // read opration
    // in >> st2;
    getline(in, st2);
    getline(in, st2);
    cout << st2;
    
    return 0;
}
