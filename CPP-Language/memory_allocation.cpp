#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void displayprice(void);
    void setprice(void);
};
void shop::setprice(void)
{
    cout << "enter id of your item no.= "<<counter+1<<endl;
    cin >> itemid[counter];
    cout << "enter price of your item = ";
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemprice[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    // dukan.setprice();       
    dukan.displayprice();

    return 0;
}