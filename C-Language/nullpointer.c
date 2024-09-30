#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL; //(&a)
    // int c = 52;

    
    // int a = 662;
    // int *p;
    // printf("the address of a is %d\n", *p);
    if (ptr != NULL)
    {
        printf("the address of a is %d\n", *ptr);
    }
    else
    {
        printf("the pointer is a null pointer and cant be derefrence \n");
    }

    return 0;
}