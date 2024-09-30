#include <stdio.h>
#include <stdlib.h>
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

    free(ptr);              // this is a free syntex of dynamic memory allocation

    printf("now your memory is free and below print value is garbege value\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("now your memory at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}
