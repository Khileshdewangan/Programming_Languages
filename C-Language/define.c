#include <stdio.h>
#define PI 3.14
#define square(r) r *r

int main()
{
    float var = PI;
    int r = 4;

    printf("the value of pi is %f\n", var);
    printf("the value of pi is %f", PI * square(r));

    return 0;
}
