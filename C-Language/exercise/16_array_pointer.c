#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value of %d :  \n", i + 1);
        scanf("%d", ptr + i);// we gave address of arr[i] in terms of pointer
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the address is %08x and the value is %d \n ", ptr + i, *ptr + i);
        // scanf("%d", arr[i]);
    }

    return 0;
}