#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;
    friend void diff(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "the point different is (" << x << "," << y << ")" << endl;
    }
};
void diff(point a, point b){
int x_diff=(a.x-b.x);
int y_diff=(a.y-b.y);
int diff=sqrt(pow(x_diff,2)+pow(y_diff,2));
cout<<diff << endl;

}
int main()
{
    point p(1, 2);
    point q(3, 5);

    diff(p,q);

    // q.displaypoint();
    return 0;
}
