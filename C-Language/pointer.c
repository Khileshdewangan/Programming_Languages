#include <stdio.h>
int main()
{
    int a = 45; //  size of(int) = 4
    int *ptr = &a;
    // double a = 45;                                       size of(double) = 8
    // double *ptr = &a;
    // char a = '4';                                         size of(char) = 1
    // char *ptr = &a;
    printf("the value of variable is = %d\n", a);
    printf("the address of variable is = %d\n", &a);
    printf("the value of variable is = %d\n", ptr);  // ptr = &ab
    printf("the value of variable is = %d\n", *ptr); //*ptr = ab
    printf("the value of variable is = %d\n", &ptr); // its address of ptr
    printf("the value of variable is = %x\n", &a);
    printf("the value of variable is = %x\n", &ptr);
    printf("the value of variable is = %x\n\n", &*ptr);

    printf("the value of variable is = %d\n", ptr);
    ptr++;
    printf("the value of variable is = %d\n", ptr);
    printf("the value of variable is = %d\n", ptr + 2);
    return 0;
}