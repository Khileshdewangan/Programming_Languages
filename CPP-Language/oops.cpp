#include <iostream>
using namespace std;

class student
{
private:
    int fess;
    int data;

public:
    char name;
    int roll;
    bool gender;

    void setdata(int b, int a);
    void getdata(){
        cout<<"fess = "<<fess<<endl;
        cout<<"data = "<<data<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"roll = "<<roll<<endl;
        cout<<"gender = "<<gender<<endl;
    }
    
};
void student :: setdata(int b1, int a1 )
{
    fess=b1;
    data=a1;
}
int main()
{
    student khilesh;
    khilesh.name='k';
    khilesh.roll=55;
    khilesh.gender=1;

    khilesh.setdata(50,10);
    khilesh.getdata();

    return 0;
}
