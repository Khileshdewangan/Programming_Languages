#include <stdio.h>
#include <stdlib.h>

// use of realloc: its use of redegin of memory

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array you want to create ", n);
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array %d\n", i, ptr[i]);
    }





    printf("enter the size of new array you want to create ", n);
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no. %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array %d\n", i, ptr[i]);
    }
    free(ptr);

    return 0;
}